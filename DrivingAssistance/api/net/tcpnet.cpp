#include "tcpnet.h"
#include <QDebug>

TcpNet::TcpNet(ITcpMediator *mediator)
    : m_pMediator(mediator),
      m_bInfoRecvQuit(false),
      m_bSendDataQuit(false)
{
    pthread_mutex_init(&m_sendLock, nullptr);
    pthread_cond_init(&m_sendCond, nullptr);
}

TcpNet::TcpNet(ITcpMediator *mediator, char* IP, unsigned short port)
    : m_pMediator(mediator),
      m_hostAddrass(IP, port),
      m_bInfoRecvQuit(false),
      m_bSendDataQuit(false)
{
    pthread_mutex_init(&m_sendLock, nullptr);
    pthread_cond_init(&m_sendCond, nullptr);
}

HostAddress TcpNet::GetHostAddress()
{
    return m_hostAddrass;
}



int TcpNet::InitNetwork(const char* IP, unsigned short port)
{
    // 初始化HostAddress
    m_hostAddrass.InitHostAddress(IP, port);
    qDebug() << "IP:" << m_hostAddrass.GetIP() << "port:" << m_hostAddrass.GetPort();

    // 创建Socket
    if((m_sockfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
        perror("Create Socket Error");
        return NET_ERROR;
    }

    memset(&m_infoRecvPID, 0, sizeof(pthread_t));

    if(pthread_create(&m_infoRecvPID, nullptr, InfoRecv, this) != 0)
    {
        perror("Create InfoRect Thread error");
    }


    return NET_SUCCEED;
}

int TcpNet::Connect()
{
    if (connect(m_sockfd, m_hostAddrass.GetAddrPtr(), sizeof(m_hostAddrass.GetAddr())))
    {
        perror("Connect Error");
        return NET_ERROR;
    }
    return NET_SUCCEED;
}



void *TcpNet::InfoRecv(void *arg)
{
    TcpNet* pTcpNet = (TcpNet*)arg;
    BAG_HEAD_T *pHead = new BAG_HEAD_T;
    int nRelReadNum = 0;
    int nOffSet = 0;
    int nPackSize = 0;
    char* pSzBuf = nullptr;

//    qDebug("InfoRecv : TID:0x%x block recv", pthread_self());
    /* 标志循环 阻塞接收 */
    while (!pTcpNet->m_bInfoRecvQuit) {
        /* 先获取包头 */
        nRelReadNum = recv(pTcpNet->m_sockfd, pHead, sizeof(BAG_HEAD_T), 0);
//        qDebug() << "InfoRecv : Head Packet, data size = " << pHead->data_size;
        /* 开空间 */
        if((pSzBuf = (char*)malloc(sizeof(char) * pHead->data_size)) == nullptr)
        {
            qDebug() << "InfoRecv : malloc pSzBuf error";
        }

        nPackSize = pHead->data_size;
        nRelReadNum = 0;
        while(nPackSize)
        {   /* 循环接收包的数据 */
            nRelReadNum = recv(pTcpNet->m_sockfd, pSzBuf + nOffSet, nPackSize, 0);
            if(nRelReadNum > 0)
            {
                nOffSet += nRelReadNum;
                nPackSize -= nRelReadNum;
            }
        }
        /* 调度员处理数据 */
        pTcpNet->m_pMediator->DealData((char *)pHead, pSzBuf, pHead->data_size);

//        qDebug() << "InfoRecv : &pszbuf = " << &pSzBuf;

#if 0
        if(pSzBuf != nullptr)
        {   /* 应用已经存储好数据，删除数据 */
            free(pSzBuf);
            pSzBuf = nullptr;

        }
#endif

    }

    return nullptr;
}

int TcpNet::SendData(char *head, char *packet, int len)
{
    /* 应用层包协议 */
    /*
     * ___________________________________________
     * |   head     |         packet              |
     * |------------+-----------------------------|
     * |sizeof(head)|     head.data_size          |
     * |            |                             |
     * -------------------------------------------
    */
    if((send(m_sockfd, head, sizeof(BAG_HEAD_T), 0)) < 0)
    {
        return NET_SEND_FAILED;
    }
    if((send(m_sockfd, packet, len, 0)) < 0)
    {
        return NET_SEND_FAILED;
    }
    return NET_SEND_SUCCEED;
}


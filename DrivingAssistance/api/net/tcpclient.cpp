#include "tcpclient.h"
#include "./api/config/myconfig.h"

TcpClient::TcpClient()
{
    m_pTcpNet = new TcpNet(this);
}

bool TcpClient::InitNetwork()
{
    const char* ip = MyConfig::serverIP.toStdString().c_str();
    int port = MyConfig::serverPort;
    return m_pTcpNet->InitNetwork(ip, port) > 0;
}

bool TcpClient::ConnectToServer()
{

    return m_pTcpNet->Connect() > 0;
}


void TcpClient::DealData(char* head, char *buf, int len)
{
    emit SIG_ReadyData(head, buf, len);
}

void TcpClient::SendData(char* head, char *buf, int len)
{

    m_pTcpNet->SendData(head, buf, len);
}

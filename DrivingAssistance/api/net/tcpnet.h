#ifndef TCPNET_H
#define TCPNET_H

#include "hostaddress.h"
#include "packet.h"
#include <stdio.h>
#include <list>

#define NET_ERROR -1
#define NET_SUCCEED 1
#define NET_SEND_FAILED -1
#define NET_SEND_SUCCEED 1


class ITcpMediator
{
public:
    virtual void DealData(char *head, char* buf, int len) = 0;
};

class TcpNet
{
public:
    TcpNet(ITcpMediator* m_pMediator);
    TcpNet(ITcpMediator* m_pMediator, char* IP, unsigned short port);
    HostAddress GetHostAddress();
    int InitNetwork(const char* IP, unsigned short port);
    int Connect();
    static void* InfoRecv(void* arg);
    int SendData(char *head, char *packet, int len);

private:
    ITcpMediator* m_pMediator;
    HostAddress m_hostAddrass;
    int m_sockfd;
    pthread_t m_infoRecvPID;
    pthread_t m_sendDataPID;
    bool m_bInfoRecvQuit;
    bool m_bSendDataQuit;
    pthread_mutex_t m_sendLock;
    pthread_cond_t m_sendCond;
};

#endif // TCPNET_H

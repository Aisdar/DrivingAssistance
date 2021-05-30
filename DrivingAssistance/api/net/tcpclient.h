#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include "tcpnet.h"

#define DEBUG_IP "198.168.2.18"
#define DEBUG_PORT 11111

class TcpClient : public QObject, public ITcpMediator
{
    Q_OBJECT
public:
    TcpClient();
    bool InitNetwork();
    bool ConnectToServer();

    void DealData(char* head, char* buf, int len);
    void SendData(char* head, char* buf, int len);

signals:
    void SIG_ReadyData(char* head, char* buf, int len);

private:
    TcpNet* m_pTcpNet;


};

#endif // TCPCLIENT_H

#ifndef HOSTADDRESS_H
#define HOSTADDRESS_H

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdio.h>

#define DEFAULT_PORT 11111

/* IP地址、端口号、网络套接字结构体 */
class HostAddress {
public:
    HostAddress();
    HostAddress(const char* ip, uint16_t port);
    void InitHostAddress(const char* ip, uint16_t port);
    void SetIP(const char* m_ip);
    char* GetIP();
    void SetPort(uint16_t m_port);
    uint32_t GetPort();
    struct sockaddr_in GetAddr();
    struct sockaddr* GetAddrPtr();

private:
    char m_ip[16];					// ip地址
    uint32_t m_port;				// 端口号
    struct sockaddr_in m_sockaddr;	// 网络套接字结构体
};

#endif // HOSTADDRESS_H

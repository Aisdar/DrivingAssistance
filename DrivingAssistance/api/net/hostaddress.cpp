#include "hostaddress.h"

HostAddress::HostAddress()
{
    memset(m_ip, 0, sizeof(m_ip));
    m_port = DEFAULT_PORT;                                // DEFAULT_PORT
    m_sockaddr.sin_family = AF_INET;                      // IPV4
}

HostAddress::HostAddress(const char* ip, uint16_t port) {
    SetIP(ip);
    SetPort(port);
    m_sockaddr.sin_family = AF_INET;                      // IPV4
    m_sockaddr.sin_addr.s_addr = inet_addr(m_ip);         // IP地址转换为二进制比特字符
}

void HostAddress::InitHostAddress(const char *ip, uint16_t port)
{
    SetIP(ip);
    SetPort(port);
}

void HostAddress::SetIP(const char* ip) {
    memset(m_ip, 0, sizeof(m_ip));
    strcpy(m_ip, ip);
    if((m_sockaddr.sin_addr.s_addr = inet_addr(m_ip)) == INADDR_NONE)
    {
        perror("HostAddress::SetIP");
    }
}
char* HostAddress::GetIP() {
    return m_ip;
}

void HostAddress::SetPort(uint16_t port) {
    m_port = port;
    m_sockaddr.sin_port = htons(port);
}

uint32_t HostAddress::GetPort() {
    return m_port;
}

struct sockaddr_in HostAddress::GetAddr() {
    return m_sockaddr;
}

struct sockaddr* HostAddress::GetAddrPtr() {
    return reinterpret_cast<struct sockaddr *>(&m_sockaddr);
}

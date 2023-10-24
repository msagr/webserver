// socket header file

#ifndef SIMPLE_SOCKET_HPP_
#define SIMPLE_SOCKET_HPP_

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace Server
{
    class SimpleSocket
    {
    private:
        struct sockaddr_in address;
        int sock;
        int connection;

    public:
        // connection
        SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
        
        // virtual function to connect to a network
        virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
        
        // function to test connections and sockets
        void test_connection(int);

        // getter function
        struct sockaddr_in get_address();
        int get_sock();
        int get_connection();
    };
}

#endif

#include "SimpleSocket.hpp"

// constructor implementation
Server::SimpleSocket::SimpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    // address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);

    // establish socket
    sock = socket(domain, service, protocol);
    
    test_connection(sock);

    // establish connnection
    connection = connect_to_network(sock, address);

    test_connection(connection);
}

// test connection virtual function
void Server::SimpleSocket::test_connection(int item_to_test)
{
    // confirms that socket or connection has been properly established
    if(item_to_test < 0)
    {
        perror("Failed to connect ...");
        exit(EXIT_FAILURE);
    }
}

// getter functions
struct sockaddr_in Server::SimpleSocket::get_address()
{
    return address;
}

int Server::SimpleSocket::get_sock()
{
    return sock;
}

int Server::SimpleSocket::get_connection()
{
    return connection;
}
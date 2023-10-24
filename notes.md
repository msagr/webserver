**struct sockaddr_in** - Its a structure commonly used in C and C++ for working with network sockets. This structure is used to store details about the network address, such as IP address and port number. Its present in "<netinet/in.h>" header.

Some members of this structure :-

    a.  sin_family = It represents the address family (whether IPv4 or IPv6).

    b. sin_port = It stores the port number.

    In computer networking, a port number is a 16-bit unsigned integer, thus ranging from 0 to 65535, used to identify specific processes or services that are running on a device within a TCP/IP network. Port numbers are used to help direct network traffic to the correct application or service on a specific device.

    c. sin_addr = Its stores the actual ip address associated with network socket.

        s_addr = It stores the human readable ip address in byte order form.

        htonl = It is used to convert 32-bit integer from host byte order to network byte order.

        (host to network long)

Sockets :- A socket is a fundamental abstraction in network programming, both in computer networks and operating systems. It provides a way for processes (applications or programs) on different devices or computers to communicate with each other over a network. Sockets are widely used for networking and interprocess communication (IPC) on a single machine.

Socket Service :- It is used to specify the socket service type. Common values for service includes :- 'SOCK_STREAM' for TCP sockets and 'SOCK_DGRAM' for UDP sockets. It determines the socket's behaviour and characteristics.

Protocol :- It specifies the specific network protocol to be used by the socket. Ex- for IPv4 and TCP, we can use 'IPPROTO_TCP' (it narrows down the type of comm. further).

Interface :- It refers to a network interface or a network card on device. It represents specific network connection on machine if there are multiple network interfaces.
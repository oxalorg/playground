# Summary of Beej's Guide to Network Programming

A file descriptor is simply an integer associated with an open file.

Create a socket using socket() system routine. It returns the socket descriptor, and you communicate through it using the specialized send() and recv()

DARPA Internet addresses (Internet Sockets) vs path names on a local node (Unix Sockets)

Internet sockets:
- Raw sockets
- Stream sockets `SOCK_STREAM`
- Datagram sockets `SOCK_DGRAM` (connectionless sockets)

Stream sockets
- reliable two way communication
- ordered
- error free
- telnet / ssh 

Unix layered model:
- Application Layer (telnet, ftp, etc.)
- Host-to-Host Transport Layer (TCP, UDP)
- Internet Layer (IP and routing)
- Network Access Layer (Ethernet, wi-fi, or whatever)

But wait, I’m not done with terminology yet! The more-sane Big-Endian is also called Network Byte Order because that’s the order us network types like.

Your computer stores numbers in Host Byte Order. If it’s an Intel 80x86, Host Byte Order is Little-Endian. If it’s a Motorola 68k, Host Byte Order is Big-Endian. If it’s a PowerPC, Host Byte Order is… well, it depends!

htons()	host to network short
htonl()	host to network long
ntohs()	network to host short
ntohl()	network to host long


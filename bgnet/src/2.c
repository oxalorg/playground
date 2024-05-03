#include <arpa/inet.h>
#include <stdio.h>

// the function inet_ntop() (“ntop” means “network to presentation”—you can call
// it “network to printable” if that’s easier to remember), like this:
// IPv4:
void reverse_conversion (struct sockaddr_in sa) {
    char ip4[INET_ADDRSTRLEN];  // space to hold the IPv4 string

    inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);

    printf("The IPv4 address is: %s\n", ip4);

    // IPv6:

    char ip6[INET6_ADDRSTRLEN]; // space to hold the IPv6 string
    struct sockaddr_in6 sa6;    // pretend this is loaded with something

    inet_ntop(AF_INET6, &(sa6.sin6_addr), ip6, INET6_ADDRSTRLEN);

    printf("The address is: %s\n", ip6);
}

int main () {
    struct sockaddr_in sa; // IPv4
    struct sockaddr_in6 sa6; // IPv6

    inet_pton(AF_INET, "10.12.110.57", &(sa.sin_addr)); // IPv4
    inet_pton(AF_INET6, "2001:db8:63b3:1::3490", &(sa6.sin6_addr)); // IPv6
    printf("Sock address in sa %d\n", sa.sin_addr.s_addr);
    reverse_conversion(sa);
}

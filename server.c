/*
simple server program
https://beej.us/guide/bgnet/html/split/client-server-background.html
*/

#include <arpa/inet.h>
#include <errno.h>
#include <netdb.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define PORT "9090"
#define BACKLOG 5

void sigchld_handler(int s) {}

void *get_in_addr(struct sockaddr *sa) {}

int main(void) {}
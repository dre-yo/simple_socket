/*
Andrew York
Program that finds ip address of current host
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <arpa/inet.h>

int main()
{
  char hostname[1024];
  struct hostent *host_info;
  struct in_addr **addr_list;

  if (gethostname(hostname, sizeof(hostname)) < 0)
  {
    perror("gethostname");
    exit(1);
  }

  if ((host_info = gethostbyname(hostname)) == NULL)
  {
    herror("gethostbyname");
    exit(1);
  }

  addr_list = (struct in_addr **)host_info->h_addr_list;
  printf("IP adresses for %s:\n", hostname);
  for (int i = 0; addr_list[i] != NULL; i++)
  {
    printf("%s\n", inet_ntoa(*addr_list[i]));
  }
  return 0;
}
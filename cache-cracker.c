#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
  setuid(0);
  printf("Howdy fella, I can change the permissions on .cache!\n");
  printf("Which permissions would you like?: ");
  fflush(stdout);
  char perm[50];
  fgets(perm, sizeof(perm), stdin);
  perm[3] = 0;
  char cmd[150];
  sprintf(cmd, "chmod %s .cache", perm);
  system(cmd);
  printf("Ran: %s\n", cmd);
}

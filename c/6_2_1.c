#include <stdio.h>
#include <unistd.h>
 
int main(void)
{
  int pid = fork();
  if (pid == 0) {
    printf("PID: %d\n""PPID: %d\n", getpid(), getppid());
  }
  return 0;
}                                                 

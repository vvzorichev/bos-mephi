#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  int pid = fork();
  if (pid > 0) {
    printf("BASH:%d --> ""PPID:%d --> ", getppid(), getpid());
  }
  else if (pid == 0) {
    printf("PID:%d\n", getpid());
  } 
  return 0;
}

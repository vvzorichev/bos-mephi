#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
  printf("BASH:%d --> ""PPID:%d --> ", getppid(), getpid());
  int pid = fork();
  int pid_arr[10];
  for (int i=0; i<10 && pid>0; i++) {
    pid_arr[i]=pid;
    pid = fork();
  }
  for (int i=0; i<10 && pid>0; i++) {
    printf("PID%d:%d ", i, pid_arr[i]);
  }
  printf("\n");
  return 0;
}

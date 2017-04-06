//Program to illustrate the wait() function

#include<sys/wait.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int pid,status;
  pid=fork();
  if(pid>0)
  {
    wait(&status);
    printf("Parent Process\n");
    printf("The child process with pid: %d is terminated with status %d\n",pid,WEXITSTATUS(status));
  }
  if(pid==0)
  {
    printf("Child Process\n");
    exit(20);
  }
  return 0;
}      

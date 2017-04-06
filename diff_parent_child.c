//Program to differentiate between parent and the child process

#include<stdio.h>
#include<unistd.h>
int main()
{
  int pid;
  pid=fork();
  if(pid>0)
  {
    sleep(1);
    printf("I am parent\n");
    printf("My parent ID is %d\n",getppid());
    printf("My ID is %d\n",getpid());
    printf("My child ID is %d\n",pid);
  }
  if(pid==0)
  {

    printf("I am child\n");
    printf("My parent ID is %d\n",getppid());
    printf("My ID is %d\n",getpid());
  }
  return 0;
}      

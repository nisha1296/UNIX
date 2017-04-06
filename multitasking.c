//Program to illustrate multitasking in processes

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
  int pid,i;
  pid=fork();
  if(pid==0)
  {
    for(i=1;i<=10;i++)
    {
      printf("I am a child\n");
      sleep(1);
    }
  }
  if(pid>0)
  {
    wait(0);
    for(i=1;i<=10;i++)
    {
      printf("I am a parent\n");
      sleep(1);
    }
  }
  return 0;
}          

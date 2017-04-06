//Program to illustrate data sharing in processes

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
  int a=100;
  int pid,i;
  pid=fork();
  if(pid==0)
  {
    printf("I am child\n");
    a+=50;
    printf("The value of a in child: %d\n",a);
  }  
  if(pid>0)
  {
    wait(2);
    printf("I am parent\n");
    a+=25;
    printf("The value of a in parent: %d\n",a);
  }  
  return 0;
}  

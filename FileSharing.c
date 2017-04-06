//Program to illustrate file sharing in parent and child processes

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/wait.h>

int main(int argc,char **argv)
{
  int i,fd,pid;
  fd=open(argv[1],O_RDWR|O_CREAT,0644);
  pid=fork();
  if(pid==0)
  {
    printf("I am child\n");
    printf("Child fd: %d\n",fd);
    write(fd,"hello\n",6);
  }
  if(pid>0)
  {
    wait(0);
    printf("I am parent\n");
    printf("Parent fd: %d\n",fd);
    write(fd,"world\n",6);
  }
  return 0;
}      

//Program to illustrate the need for lseek()
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char **argv)
{
  char a;
  int fd;
  fd=open(argv[1],O_RDWR|O_CREAT,0644);
  write(fd,"UNIX Programming\n",17);
  lseek(fd,0,SEEK_SET);
  while(read(fd,&a,1)>0)
    write(1,&a,1);    //write to output device
  return 0;
}    

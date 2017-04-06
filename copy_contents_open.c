//Program to copy the contents of one file to another using open()

#include<unistd.h>
#include<fcntl.h>    //for O_RDONLY,O_WRITE,O_CREAT and open()

int main(int argc,char **argv)
{
  int fd1,fd2;     //file descriptors
  char a;
  fd1=open(argv[1],O_RDONLY);
  fd2=open(argv[2],O_WRONLY|O_CREAT,0644);
  while(read(fd1,&a,1)>0)
    write(fd2,&a,1);
  return 0;
}    

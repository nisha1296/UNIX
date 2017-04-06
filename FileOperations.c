//Program to open a file in read-only mode, read line by line and display each line as it is read. Close the file when EOF is learned

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char** argv)
{
  int fd,i=0;
  char buf[50],c;
  fd=open(argv[1],O_RDONLY);
  while(read(fd,&c,1)>0)
  {
    buf[i++]=c;
    if(c=='\n')
    {
      printf("\n");
      write(1,buf,i);
      i=0;
    }
  }
  return 0;
}           

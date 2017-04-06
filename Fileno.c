//Program to illustrate difference between file pointer and file descriptor
#include<unistd.h>
#include<stdio.h>
int main(int argc,char **argv)
{
  FILE *fp;
  int fd;
  fp=fopen(argv[1],"w");
  fd=fileno(fp);
  printf("%d\n",fd);
  write(fd,"hello",6);
  return 0;
}  

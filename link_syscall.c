//Program to illustrate link() API

#include<unistd.h>
int main(int argc,char **argv)
{
  link(argv[1],argv[2]);
  return 0;
}  

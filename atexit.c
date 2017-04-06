//Program to illustrate atexit() function

#include<stdio.h>
#include<stdlib.h>

void handler1()
{  printf("This is handler1\n");  }

void handler2()
{  printf("This is handler2\n");  }

int main()
{
  printf("Entered main\n");
  atexit(handler1);
  atexit(handler2);
  //exit(1);
  printf("Leaving main\n");
  return 0;
}    

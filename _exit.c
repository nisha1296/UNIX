//Program to illustrate _exit() function

#include<stdio.h>
#include<stdlib.h>

void fun1()
{
  printf("Entered Fun1\n");
  _exit(1);
  printf("Leaving Fun1\n");
}

int main()
{
  printf("Entered main\n");
  fun1();
  printf("Leaving main\n");
  return 0;
}    

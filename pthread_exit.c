//Program to illustrate pthread_exit() function

#include<stdio.h>
#include<stdlib.h>
void fun1()
{  printf("This is fun1\n");  }

void fun2()
{  printf("This is fun2\n");  }

int main()
{
  printf("Entered main\n");
  fun1();
  fun2();
  pthread_exit();
  printf("Leaving main\n");
  return 0;
}    

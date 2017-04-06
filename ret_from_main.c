//Program to illustrate the return from main

#include<stdio.h>
void fun1()
{  printf("Fun1\n"); }

void fun2()
{  printf("Fun2\n"); }

int main()
{
  printf("Main Function\n");
  fun1();
  fun2();
  return 0;
}  

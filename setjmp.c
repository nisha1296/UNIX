//Program to illustrate setjmp() and longjmp()

#include<stdio.h>
#include<setjmp.h>

jmp_buf env;

void fun3()
{
  int a=6;
  printf("This is Fun3\n");
  if(a==6)
    longjmp(env,1);
}

void fun2()
{
  fun3();
  printf("This is Fun2\n");
}

void fun1()
{
  fun2();
  printf("This is Fun1\n");
}

int main()
{
  if(!setjmp(env))
    fun1();
  printf("This is main\n");
  return 0;
}            

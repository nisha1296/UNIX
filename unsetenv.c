//Program to illustrate unsetenv()

#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *s;
  s=getenv("HOME");
  printf("The value of HOME before setenv(): %s\n",s);
  unsetenv("HOME");
  s=getenv("HOME");
  printf("The value of HOME after setenv(): %s\n",s);
 
  return 0;
}  
  

//Program to illustrate setenv()

#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *s;
  s=getenv("HOME");
  printf("The value of HOME before setenv(): %s\n",s);
  setenv("HOME","/home/nisha/Desktop",1);
  s=getenv("HOME");
  printf("The value of HOME after setenv(): %s\n",s);
  s=getenv("NEWVAR");
  printf("The value of NEWVAR before setenv(): %s\n",s);
  setenv("NEWVAR","Hello",1);
  s=getenv("NEWVAR");
  printf("The value of NEWVAR after setenv(): %s\n",s);
  return 0;
}  
  

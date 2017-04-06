//Retrieving envirnment variables using getenv()
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *a;
  a=getenv("HOME");
  printf("The value of HOME is: %s\n",a);
  a=getenv("LOGNAME");
  printf("The value of LOGNAME is: %s\n",a);
  return 0;
}    

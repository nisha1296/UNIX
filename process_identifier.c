//Program to illustrate getpid(), getppid(), getuid(), geteuid(), getgid() and getegid()

#include<unistd.h>
#include<stdio.h>

int main()
{
  printf("The process ID is: %d\n",getpid());
  printf("The process parent ID is: %d\n",getppid());
  printf("The process user ID is: %d\n",getuid());
  printf("The process effective user ID is: %d\n",geteuid());
  printf("The process group ID is: %d\n",getgid());
  printf("The process effective group ID is: %d\n",getegid());
  return 0;
}  
  

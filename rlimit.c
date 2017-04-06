//Program to illustrate setrlimit() and getrlimit()
#include<sys/time.h>
#include<sys/resource.h>
#include<stdio.h>
int main()
{
  struct rlimit r,r1;
  getrlimit(RLIMIT_NOFILE,&r);
  if(r.rlim_max==RLIM_INFINITY)
    printf("Something\n");
  else
  {
    printf("Soft limit: %lu\n",r.rlim_cur);
    printf("Hard limit: %lu\n",r.rlim_max);
  }
  r.rlim_cur++;
  r.rlim_max++;
  setrlimit(RLIMIT_NOFILE,&r);
  getrlimit(RLIMIT_NOFILE,&r1);
   printf("Soft limit: %lu\n",r1.rlim_cur);
   printf("Hard limit: %lu\n",r1.rlim_max);
  
  return 0;
}      


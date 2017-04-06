//Retrieving envirnment variables using env[]
#include<stdio.h>

int main(int argc,char **argv,char **env)
{
  int i;
  for(i=0;env[i];i++)
    printf("%s\n",env[i]);
  return 0;
}    

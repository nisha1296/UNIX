//Program to count the number of characters, blank spaces and lines in a file

#include<stdio.h>
int li,bl,ch;
int main(int argc,char **argv)
{
  FILE *fp;
  char a;
  fp=fopen(argv[1],"r");
  while(fread(&a,1,1,fp)>0)
  {
    if(a=='\n')
    {
      li++;
    }
    else if(a==' ')
      bl++;
    else
    {
      if(ch>0&&li==0)
        li++;
      ch++;   
    }   
  }
  printf("%d\n%d\n%d\n",li,bl,ch);
  return 0;
}  

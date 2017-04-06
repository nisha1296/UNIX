//Program to copy contents of one file to another file and to create a new file if it does not exist
#include<stdio.h>
int main(int argc,char *argv[])
{
  FILE *fp1,*fp2;    //file pointer
  char a;
  fp1=fopen(argv[1],"r");
  fp2=fopen(argv[2],"w");
  while(fread(&a,1,1,fp1)>0)
    fwrite(&a,1,1,fp2);
  fclose(fp1);
  fclose(fp2);
}    

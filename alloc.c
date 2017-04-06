//Program to illustrate alloca()

#include<stdio.h>
#include<alloca.h>

int main()
{
  int n,i,*s;
  printf("Enter the number of subjects: \n");
  scanf("%d",&n);
  s=(int*)alloca(sizeof(int)*n);
  printf("Enter the marks: \n");
  for(i=0;i<n;i++)
    scanf("%d",&s[i]);
  printf("Marks List: \n");
  for(i=0;i<n;i++)
    printf("%d\n",s[i]);
  return 0;
}      

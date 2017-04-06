//Program to illustrate dynamic memory allocation using malloc() and free()

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,*s;
  printf("Enter the number of subjects: \n");
  scanf("%d",&n);
  s=(int*)malloc(sizeof(int)*n);
  printf("Enter the marks: \n");
  for(i=0;i<n;i++)
    scanf("%d",&s[i]);
  printf("Marks List: \n");
  for(i=0;i<n;i++)
    printf("%d\n",s[i]);
  free(s);  
  return 0;
}      

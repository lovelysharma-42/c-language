//by Lovely Sharma
//program to calculate factorial of a number.
#include<stdio.h>
int main()
{
  int i,fact=1,num;
  printf("\n enter any number: ");
  scanf("%d",&num);
  
  if(num==0)
  fact=1;
  else
  {
    for(i=1;i<=num;i++)
     fact=fact*i;
  }
  printf("Factorial =%d",fact);
  return 0;
}

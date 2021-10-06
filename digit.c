//by LOVELY SHARMA
//program to find the digit at one's.
#include<stdio.h>
int main()
{
  int number,digitAtOnesPlace;
  printf("\n enter any number of your choice :");
  scanf("%d",&number);
  digitAtOnesPlace = number%10;
  printf("\n digit at one's place of %d is %d ",number,digitAtOnesPlace);
  return 0;
}

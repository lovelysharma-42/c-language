//written by Lovely sharma
//date : 6 oct,2021 , time 11 am
//program to swap two numbers using a temporary variable.
#include <stdio.h>
int main(void) 
{
      int d1,d2,temporary;
      printf("enter first number \n");
      scanf("%d",&d1);
      printf("enter second number \n");
      scanf("%d",&d2);
      temporary= d1;
      d1=d2;
      d2=temporary;
      printf("The first number after swapping is :%d\n",d1);
      printf("The second number after swapping is :%d\n",d2);
      
      return 0;
}

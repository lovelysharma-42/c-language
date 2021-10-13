//by LOVELY SHARMA
//a program to largest of 5 numbers using while loop and ternary operator.
#include <stdio.h>
int main(void) 
{
        int i = 1, large = -32678,num;
        while(i<=5)
        {
          printf("\nEnter the number :");
          scanf("%d",&num);
          large=num>large?num:large;
          i++;
        }
        printf("\n The largest of 5 numbers entered is : %d \n",large);
        return 0;
}        

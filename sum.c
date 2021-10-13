//by LOVELY SHARMA
//a program to calculate the sum of first 10 natural numbers using while loop.
#include <stdio.h>
int main(void) 
{
        int i = 1,sum = 0;
        while(i<=10)
        {
          sum = sum+i;
          i++;
        }
        printf("\n the sum is : %d",sum);
        return 0;
}        

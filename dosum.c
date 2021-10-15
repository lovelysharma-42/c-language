//by LOVELY SHARMA
//a program to calculate the sum of first 100 natural numbers using do while loop.
#include <stdio.h>
int main(void) 
{
        int i = 1, sum = 0;
        do
        {
          
          sum+=i;
          i++;
        }while(i<=100);
        printf("\n Sum =%d",sum);
        return 0;
}        

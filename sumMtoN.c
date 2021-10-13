//by LOVELY SHARMA
//a program to calculate the sum of numbers from m to n using while loop.
#include <stdio.h>
int main(void) 
{
        int m,n,sum = 0;
        printf("enter the value of m : ");
        scanf("%d",&m);
        printf("enter the value of n : ");
        scanf("%d",&n);
        while(m<=n)
        {
          sum = sum + m;
          m++;
        }
        printf("\n the sum is : %d",sum);
        return 0;
}        

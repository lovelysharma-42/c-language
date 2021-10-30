//by LOVELY SHARMA
//a program which print sum of the series 1/1+2^2/2+3^3/3+...+n^n/n using for loop.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int i,n;
        float sum=0.0,a;
        printf("\nEnter the value of n:");
	scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
         a=(float)pow(i,i)/i;
         sum+=a;
        }
         printf("\n the sum of the series 1/1+2^2/2+3^3/3+...+n^n/n =%.2f",sum);
             
        return 0;
}        

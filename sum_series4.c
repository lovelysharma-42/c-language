//by LOVELY SHARMA
//a program which print sum of the series 1/1+2^2/2+3^2/3+...+n^2/n using for loop.
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
         a=(float)pow(i,2)/i;
         sum+=a;
        }
         printf("\n the sum of the series 1/1^2+1/2^2+1/3^2+...+1/%d^2=%.2f",n,sum);
             
        return 0;
}        

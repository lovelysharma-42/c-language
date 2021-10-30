//by LOVELY SHARMA
//a program which print sum of the series 1/2+2/3+3/4+...+n/n+1 using for loop.
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
         a=(float)i/(i+1);
         sum+=a;
        }
         printf("\n the sum of the series 1/2+2/3+3/4+...+%d/%d=%.2f",n,n+1,sum);
             
        return 0;
}        

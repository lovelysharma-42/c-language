//by LOVELY SHARMA
//a program which print sum of cubes of first n natural numbers 1^3+2^3+3^3+...+n^3 .
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int i,n,sum=0,a;
        printf("\nEnter the value of n:");
	scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
         a=pow(i,3);
         sum+=a;
        }
         printf("\n the sum of the series 1^3+2^3+3^3+...+n^3 =%d",sum);
             
        return 0;
}        

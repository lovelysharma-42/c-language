//by LOVELY SHARMA
//a program which print sum of square of first n even numbers.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int i,n,sum=0,a;
        printf("\nEnter the value of n:");
	scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
          if(i%2==0)
           {
            a=pow(i,2);
            sum+=a;
           } 
       }
        
         printf("\n the sum of the series 1^2+2^2+3^2+... =%d",sum);
             
        return 0;
}        

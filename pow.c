//by LOVELY SHARMA
//a program to calculate pow(x,n) i.e., to calculate x^n using for loop.
#include <stdio.h>
#include <math.h>
int main(void) 
{
        int i,num,n;
        long int result=1;
        printf("\n Enter the number : ");
        scanf("%d",&num);
         printf("\n Till which power to complete : ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
         result = result *num;
         printf("\n pow(%d,%d)=%ld",num,n,result);
        return 0;
}        

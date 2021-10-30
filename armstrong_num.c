//by LOVELY SHARMA
//a program to find whether a given number is an armstrong number or not.
#include <stdio.h>
int main(void) 
{
        int r,num,sum=0,temp;
        printf("\nEnter the value of num:");
	scanf("%d",&num);
	temp=num;
        while(temp>0)
        {
         r=temp%10;
         sum+=r*r*r;
         temp=temp/10;
        }
        if(sum==num)
         printf("\n %d is an Armstrong number.",num);
        else
         printf("\n %d is not an Armstrong number.",num);
        return 0;
}        

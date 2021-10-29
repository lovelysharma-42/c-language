//by LOVELY SHARMA
//a program to calculate gcd of two no.s using while loop.
#include <stdio.h>
int main(void) 
{
        int num1,num2,temp;
        int divisor,dividend,remainder;
        printf("Enter the first number :\n");
	scanf("%d",&num1);
	printf("Enter the second number :\n");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
	  dividend=num1;
	  divisor=num2;
	}
	else
	{
	  dividend=num2;
	  divisor=num1;
	}
	
        while(divisor)
        {
          remainder=dividend%divisor;
          dividend=divisor;
          divisor=remainder;
        }
        printf("\n GCD of %d and %d is= %d",num1,num2,dividend);
        return 0;
}        

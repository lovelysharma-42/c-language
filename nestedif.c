//by LOVELY SHARMA
//a program to take two numbers.check whether they are eaual,greater or lesser using nestedif.
#include <stdio.h>
int main(void) 
        {
        int num1,num2;
        printf("\n Enter two numbers of your choice:");
	scanf("%d %d",&num1,&num2);
	if(num1==num2)
	printf("\n The two numbers are equal.");
	else if(num1>num2)
	printf("\n %d is greater than %d",num1,num2);
	else
	printf("\n %d is smaller than %d",num1,num2);
	return 0;
	}


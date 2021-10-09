//by LOVELY SHARMA
//desicion control statements practice
//a program to test whether a number enter is positive,negative or equal to zero.
#include <stdio.h>
int main(void) 
        {
        int number;
        printf("\n Enter any number of your choice:");
	scanf("%d",&number);
	if(number==0)
	printf("\n The number entered is equal to zero.");
	else if(number>0)
	printf("\n The number entered is positive");
	else
	printf("\n The number entered is negative");
	return 0;
	}


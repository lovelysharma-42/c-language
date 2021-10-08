//by LOVELY SHARMA
//a program to determine whether a person is eligible to vote or not .
#include <stdio.h>
int main(void) {
        int age;
        printf("\n Enter the age:");
	scanf("%d",&age);
	if(age>=18)
	printf("\n Eligible to vote");
	else
	printf("\n Sorry! Not Eligible to vote.");
        return 0;
	}


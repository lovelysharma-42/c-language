//by LOVELY SHARMA
//a program to determine whether enter number is even or odd .
#include <stdio.h>
int main(void) {
        int year;
        printf("\n Enter any year:");
	scanf("%d",&year);
	if((year%4==0)&&(year%100==0)||(year%400))
	printf("\n Entered year is a leap year.");
	else
	printf("\n Entered year is not a leap year.");
        return 0;
	}


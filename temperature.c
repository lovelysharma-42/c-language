//by LOVELY SHARMA
//a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include <stdio.h>
int main(void) {
        int c,f=0;
        printf("Enter the temperature in celsius:\n");
	scanf("%d",&c);
	f = (9/5 * c) + 32;
	printf("Temperature in fahrenheit is %d",f);
	return 0;
	}


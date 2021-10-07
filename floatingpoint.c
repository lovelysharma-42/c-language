//by LOVELY SHARMA
//a program to take a floating point number and then display it to 2,3,4,5,6,7 and 8 decimal places.
#include <stdio.h>
int main(void) {
        float f;
        printf("\n Enter any integer of your choice:");
	scanf("%f",&f);
	printf("\n floating point number to 2 decimal place = %.2f",f);
	printf("\n floating point number to 2 decimal place = %.3f",f);
	printf("\n floating point number to 2 decimal place = %.4f",f);
	printf("\n floating point number to 4 decimal place = %.5f",f);
	printf("\n floating point number to 2 decimal place = %.6f",f);
	printf("\n floating point number to 2 decimal place = %.7f",f);
	printf("\n floating point number to 8 decimal place = %.8f",f);
        return 0;
	}


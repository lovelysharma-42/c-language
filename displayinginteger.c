//by LOVELY SHARMA
//a program to take integer value and then display it into decimal,octal and hexadecimal notation .
//type conversion 
#include <stdio.h>
int main(void) {
        int c;
        float n;
        printf("\n Enter any integer of your choice:");
	scanf("%d",&c);
	n=c;
	printf("%d in decimal form = %f\n",c,n);
	printf("%d in octal form = %o\n",c,c);
	printf("%d in hexadecimal form = %x\n",c,c);

	return 0;
	}


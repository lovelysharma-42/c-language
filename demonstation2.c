//by lovely sharma
//more experiment with format specifier,flags,width and printf.
#include <stdio.h>

int main(void) {
	printf("\n Result: %d%c%f",12,'a',3.6);
	printf("\n Result: %d %c %f",12,'a',3.6);
	printf("\n Result: %d\t%c\t%f",12,'a',3.6);
	printf("\n Result: %d\t%c\t%6.2f",12,'a',985.34897);
	printf("\n Result: %5d \t %x \t %#x",902,902,902);
	printf("\n The number is %6d",26);
	printf("\n The number is %2d",1256);
	printf("\n The number is %6d",1256);
	printf("\n The number is %-6d",1256);
	printf("\n The number is %06d",1256);
	printf("\n The price of this item is %09.2f",178.786);
	printf("\n She is \'so\' pretty.");
	printf("\n She is \"so\" pretty.");
	printf("\n She is \\ so pretty.");
	
	return 0;
}


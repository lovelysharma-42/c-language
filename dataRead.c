//by LOVELY SHARMA
//a program to take data from user and read the given number of data .Displaying successful or Error
#include <stdio.h>
int main(void) {
        int number;
        char c;
        float f;
        printf("\n Enter an integer number of your choice, a char value and a floating number:\n");
	if(scanf("%d %c %f",&number,&c,&f)==3)
	printf("\n Data read Successfuly");
	else
	printf("\n Error in data input");
        return 0;
	}


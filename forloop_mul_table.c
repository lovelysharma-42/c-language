//by LOVELY SHARMA
//a program to the multiplication table of n, where n is entered by the user .

#include <stdio.h>
int main(void) 
{
        int num,i;
        printf("\n Enter any number of your choice:");
	scanf("%d",&num);
	printf(" Multiplication table of %d",num);
	printf(" \n ********************************************");
	for(i=0;i<=20;i++)
	printf(" \n %d * %d=%d",num,i,(num*i));
	
	return 0;
}


//by LOVELY SHARMA
//a program to the multiplication table of a number and finding sum.

#include <stdio.h>
int main(void) 
{
        int i,num,mul,sum=0;
	printf(" Enter any number : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
	mul=num*i;
	sum+=mul;
	}
	printf("Sum=%d",sum);
	return 0;
}


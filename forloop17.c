//by LOVELY SHARMA
//a program to classify a given number as prime or composite. 

#include <stdio.h>
int main(void) 
{
        int i,flag=0,num;
	printf(" \n Enter any number :");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{
	 if(num%i == 0)
	   {
	   flag=1;
	   break;
	   }
	}
	if(flag ==1)
	   printf("\n %d is a composite number" ,num);
	else
	   printf("\n %d is a prime number" ,num);
	return 0;
}


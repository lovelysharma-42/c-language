//by LOVELY SHARMA
//write a program using do-while loop to read numbers untill -1 is encountered.Also count the number of prime and composite number. 

#include <stdio.h>
int main(void) 
{
        int i,flag=0,num,primes=0,composites=0;
        printf("\n Enter -1 to exit .");
	printf(" \n Enter any number :");
	scanf("%d",&num);
	do
	{
	for(i=2;i<num/2;i++)
	{
	 if(num%i == 0)
	   {
	   flag=1;
	   break;
	   }
	}
	if(flag ==0)
	   primes++;
	else
	   composites++;
	   
	flag=0;
	printf("Enter any number :");   
        scanf("%d",&num);
        }while(num != -1);
        printf("\n count of prime numbers entered = %d",primes);
        printf("\n count of composite numbers entered = %d",composites);
	return 0;
}


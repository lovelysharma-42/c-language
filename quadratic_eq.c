//by LOVELY SHARMA
//a program to calculate the roots of a quadratic equation.
#include <stdio.h>
#include <math.h>
int main(void) 
       {
        int a,b,c;
        float D,deno,root1,root2;
        printf("\n Enter the values of a,b and c : ");
	scanf("%d %d %d",&a,&b,&c);
	D=(b*b)-(4*a*c);
	deno = 2*a;
	if(D > 0)
	{
	printf("\n Real roots");
	root1 = (-b+sqrt(D))/deno;
	root1 = (-b-sqrt(D))/deno;
	printf("\n ROOT1 =%f \t ROOT 2 = %f",root1,root2);
	}
	else if(D == 0)
	{
	printf("\n Equal roots");
	root1 = -b/deno;
	printf("\n ROOT1 =%f \t ROOT 2 = %f",root1,root1);
	}
	else
	printf("\n IMAGINARY ROOTS \n");
	return 0;
       }



//by LOVELY SHARMA
//the area of a triangle using hero's formula.
//sqrt is a math function defined in math.h
#include <stdio.h>
#include <math.h>
int main(void) {
        float a,b,c,s,area;
        printf("\nEnter the length of three sides:\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area =%f\n",area);
	return 0;
	}


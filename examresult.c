//by LOVELY SHARMA
//desicion control statements practice
//a program to display the examination result.
#include <stdio.h>
int main(void) 
        {
        int marks;
        printf("\n Enter the marks obtained:");
	scanf("%d",&marks);
	if(marks >= 90)
	printf("\n Excellent \n");
	else if(marks >= 80 && marks < 90)
	printf("\n Distinction\n");
	else if(marks >= 70 && marks < 80)
	printf("\n Good");
	else if(marks >= 60 && marks < 70)
	printf("\n First Division\n");
	else if(marks >= 50 && marks < 60)
	printf("\n Second Division\n");
	else if(marks >= 40 && marks < 50)
	printf("\n Third Divison \n");
	else
	printf("\n Fail \n");
	return 0;
	}

//by LOVELY SHARMA
//desicion control statements practice
//a program to display the grades.
#include <stdio.h>
int main(void) 
        {
        float marks1,marks2,marks3,marks4,avg,total=0;
        printf("\n Enter marks obtained in Maths:");
	scanf("%f",&marks1);
	printf("\n Enter marks obtained in Hindi:");
	scanf("%f",&marks2);
	printf("\n Enter marks obtained in Social Science:");
	scanf("%f",&marks3);
	printf("\n Enter marks obtained in English:");
	scanf("%f",&marks4);
	total = marks1+marks2+marks3+marks4;
	avg = total/4;
	printf("\n Total=%f",total);
	printf("\n Average=%.2f",avg);
	if(avg >= 90)
	printf("\n Excellent \n");
	else if(avg >= 80 && avg < 90)
	printf("\n Distinction\n");
	else if(avg >= 70 && avg < 80)
	printf("\n Good");
	else if(avg >= 60 && avg < 70)
	printf("\n First Division\n");
	else if(avg >= 50 && avg < 60)
	printf("\n Second Division\n");
	else if(avg >= 40 && avg < 50)
	printf("\n Third Divison \n");
	else
	printf("\n Fail \n");
	return 0;
	}

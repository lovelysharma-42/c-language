//by LOVELY SHARMA
/* A company decides to give bonus to all its employees on Diwali . A 5% bonus on salary is given to the male workers and 10% bonus on salary to the female workers.Write a program to enter the salary and sex of the employee. If the salary of the employee is less than Rs. 10000 then the employee gets an extra 2% bonus that has to be given to the employee and display the salary that the employee will get.*/
#include <stdio.h>
int main(void) 
        {
        char ch;
        float bonus,salary,amt_to_be_paid;
        printf("\n Enter the gender of the employee (m or f):");
        scanf("%c",&ch);
        printf("\n Enter salary of the employee:");
	scanf("%f",&salary);
	if(ch=='m')
	bonus=salary*0.05;
	else
	bonus=salary*0.10;
	
	if(salary<10000)
	bonus+=salary*0.02;
	amt_to_be_paid =  salary+bonus;
	printf("\n Salary=%f",salary);
	printf("\n Bonus=%f",bonus);
	printf("\n******************************************");
	printf("\n Amount to be paid: %f",amt_to_be_paid);
	return 0;
	}


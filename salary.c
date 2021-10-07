//By lovely sharma
/*a program to calculate salary .taking user input as basicpay,employee's nameand id number.take HRA 10% of basic pay and tax 5%*/
#include<stdio.h>
#define HRA 10
#define TA 5
 int main()
  {
        char name[50];
        int employeeid;
        printf("\nEnter the name of the employee:");
	scanf("%[^\n]%*c",name);
	printf("\nEnter the id number of employee:");
	scanf("%d",& employeeid);
        double basicpay,HRA_amt,tax_amount,salary;
        printf("\n Enter basic pay:");
        scanf("%lf",&basicpay);
        HRA_amt = (basicpay*HRA)/100;
        tax_amount = (basicpay*TA)/100;
        salary = basicpay + HRA_amt -tax_amount;
        printf("\n The HRA amount is:%lf",HRA_amt);
        printf("\n The Tax amount is:%lf",tax_amount);
        printf("\n The salary of employee is:%lf",salary);
     
     
     return 0;
     
  } 

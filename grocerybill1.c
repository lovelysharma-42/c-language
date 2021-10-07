//by LOVELY SHARMA
//on date 6 Oct,2021.
//program to calculate the bill amount for items given its quantity sold,value,discount and tax.
#include <stdio.h>
#include<unistd.h>
int main(void) {
        float qty,value,amt,tax,tax_amt,discount,discount_amt,sub_total,total_amt;
        printf("\nEnter the quantity of item sold:");
	scanf("%f",&qty);
	printf("\nEnter the value of item:");
	scanf("%f",&value);
	printf("\nEnter the discount percentage:");
	scanf("%f",&discount);
	printf("\nEnter the tax percentage :");
	scanf("%f",&tax);
	amt=qty*value;
	discount_amt=(amt*discount)/100;
	sub_total=amt-discount_amt;
	tax_amt=(sub_total*tax)/100;
	total_amt= sub_total + tax_amt;
	printf("Generating BILL, please wait!");
	usleep(1000000);
        printf("\n\n\n*********BILL*********");
        printf("\n Quantity sold :%f",qty);
	printf("\n Price per item :%f",value);
	printf("\n-------------------------------");
	printf("\n Amount :%f",amt);
	printf("\n Discount : - %f",discount_amt);
	printf("\n Discounted total :%f",sub_total);
	printf("\n Tax : + %f",tax_amt);
	printf("\n-------------------------------");
	printf("\n Total Amount: %f",total_amt);
	return 0;
	}


//by LOVELY SHARMA
//on date 8 Oct,2021.
//program to calculate the bill amount for items given its quantity sold,value,discount and tax.
#include <stdio.h>
int main(void) {
        char str[50];
        int qty;
        float value,amt,tax,tax_amt,discount,discount_amt,sub_total,total_amt;
        printf("\nEnter the name of item:");
	scanf("%[^\n]%*c",str);
        printf("\nEnter the quantity of item sold:");
	scanf("%d",&qty);
	printf("\nEnter the price of each item:");
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
        printf("\n\n\n*********BILL*********");
        printf("\n Item    Quantity    Price     Amount ");
        printf("\n %s     %d          %f        %f",str,qty,value,amt);
	printf("\n-----------------------------------------------------");
	
	printf("\n Discount     Discounted total     Tax");
	printf("\n -%f           %f                   +%f",discount_amt,sub_total,tax_amt);
	printf("\n------------------------------------------------------");
	printf("\n Total Amount to be paid: %f",total_amt);
	return 0;
	}


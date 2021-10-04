#include <stdio.h>

int main(void) {
        char name[20];
        char size;
        int personItServes;
        float retail_Price;
        printf("Enter the name of the pizaa:\n");
	scanf("%[^\n]%*c",name);
	printf("Enter the size of the pizaa:\n");
	scanf("%c",&size);
	printf("Enter the number of person:\n");
	scanf("%d",&personItServes);
	printf("Enter the retail price of pizaa:\n");
	scanf("%f",&retail_Price);
    printf("Hello! You have ordered a %s of size %c that serves %d.\nPlease pay Rs%f to the delivery person.",name,size,personItServes,retail_Price);

	return 0;
}

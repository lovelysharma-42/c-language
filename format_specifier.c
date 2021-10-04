#include <stdio.h>

int main(void) {
        char name[20]="creamyCheesyPizza";
        char size='M';
        int personItServes=2;
        float retailPrice=389.56;
	printf("%s\n",name);
	printf("%c\n",size);
        printf("%d\n",personItServes);
	printf("%f\n",retailPrice);
        printf("%.1f\n",retailPrice);
        printf("Hello! You have ordered a %s pizaa of size %c that serves %d.\nPlease pay Rs%f to the delivery person.",name,size,personItServes,retailPrice);
	
	return 0;
}

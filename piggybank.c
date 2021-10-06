//by LOVELY SHARMA
//AT 3 pm on date 6 Oct,2021.
//program to count total amount present in the piggy bank, given the coins of Rs 10,Rs 5,Rs 2 and Rs 1.
#include <stdio.h>
int main(void) {
        int coin_of_10,coin_of_5,coin_of_2,coin_of_1,total_amt;
        printf("\nEnter the number Rs 10 coins in the piggy bank:");
	scanf("%d",&coin_of_10);
	printf("\nEnter the number Rs 5 coins in the piggy bank:");
	scanf("%d",&coin_of_5);
	printf("\nEnter the number Rs 2 coins in the piggy bank:");
	scanf("%d",&coin_of_2);
	printf("\nEnter the number Rs 1 coins in the piggy bank:");
	scanf("%d",&coin_of_1);
	total_amt=  coin_of_10*10+coin_of_5*5+coin_of_2*2+coin_of_1*1;
	printf("\n The total amount is =%d",total_amt);
	return 0;
	}


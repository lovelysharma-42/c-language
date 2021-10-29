//by LOVELY SHARMA
//a program to enter a number and then calcualte sum of its digits.
#include <stdio.h>
int main(void) 
{
        int num,temp = 0,sum_of_digits = 0;
        printf("\n Enter the number :");
        scanf("%d",&num);
        while(num != 0)
        {
          temp = num%10; 
          sum_of_digits += temp;
          num = num/10;
        }
        printf("\n The sum of digits =%d",sum_of_digits);
        return 0;
}        


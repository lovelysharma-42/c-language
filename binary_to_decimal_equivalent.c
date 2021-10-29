//by LOVELY SHARMA
//a program to enter a binary number and then display decimal equivalent of this number.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int decimal_num=0,binary_num,remainder;
        int i=0;
        printf("\n Enter the binary number :");
        scanf("%d", &binary_num);
        while(binary_num != 0)
        {
          remainder = binary_num%10; 
          decimal_num += remainder*pow(2,i);
          binary_num = binary_num/10;
          i++;
        }
        printf("\n Decimal equivalent =%d",decimal_num);
        return 0;
}        


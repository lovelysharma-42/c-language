//by LOVELY SHARMA
//a program to enter a decimal number and then display binary equivalent of this number.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int decimal_num,binary_num=0,remainder;
        int i=0;
        printf("\n Enter the decimal number :");
        scanf("%d",&decimal_num);
        while(decimal_num != 0)
        {
          remainder = decimal_num%2; 
          binary_num += remainder*pow(10,i);
          decimal_num = decimal_num/2;
          i++;
        }
        printf("\n Binary equivalent =%d",binary_num);
        return 0;
}        


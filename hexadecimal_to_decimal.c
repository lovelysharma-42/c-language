//by LOVELY SHARMA
//a program to enter a hexadecimal number and then display the decimal equivalent of this number.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int decimal_num=0,hex_num,remainder;
        int i=0;
        printf("\n Enter the hexadecimal number :");
        scanf("%d",&hex_num);
        while(hex_num != 0)
        {
          remainder =hex_num %10; 
          decimal_num += remainder*pow(16,i);
          hex_num = hex_num/10;
          i++;
        }
        printf("\n decimal equivalent =%d",decimal_num);
        return 0;
}        
 

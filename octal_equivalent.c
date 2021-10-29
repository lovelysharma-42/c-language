//by LOVELY SHARMA
//a program to enter a decimal number and then display the octal equivalent of this number.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int decimal_num,octal_num=0,remainder;
        int i=0;
        printf("\n Enter the decimal number :");
        scanf("%d",&decimal_num);
        while(decimal_num != 0)
        {
          remainder = decimal_num%8; 
          octal_num += remainder*pow(10,i);
          decimal_num = decimal_num/8;
          i++;
        }
        printf("\n Octal equivalent =%d",octal_num);
        return 0;
}        
 

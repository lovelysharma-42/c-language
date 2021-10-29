//by LOVELY SHARMA
//a program to enter a octal number and then display the decimal equivalent of this number.
#include <stdio.h>
#include<math.h>
int main(void) 
{
        int decimal_num=0,octal_num,remainder;
        int i=0;
        printf("\n Enter the octal number :");
        scanf("%d",&octal_num);
        while(octal_num != 0)
        {
          remainder =octal_num %10; 
          decimal_num += remainder*pow(8,i);
          octal_num = octal_num/10;
          i++;
        }
        printf("\n decimal equivalent =%d",decimal_num);
        return 0;
}        
 

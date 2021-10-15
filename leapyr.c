//by LOVELY SHARMA
/*a program to least all the leap years from 1900 to 1920 using do while loop.*/
#include <stdio.h>
int main(void) 
{
        int m=1900,n=1920;
        
        do
        { 
         if(((m%4==0)&&(m%100!=0))||(m%400==0))
         printf("\n%d is a leap year",m);
        
          m++;  
        }while( m<=n);
        
        return 0;
}        

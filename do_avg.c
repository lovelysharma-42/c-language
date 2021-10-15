//by LOVELY SHARMA
/*a program to calculate the average of numbers entered by the user by using do while loop.*/
#include <stdio.h>
int main(void) 
{
        int num,i =1,sum= 0; 
        float avg;
        printf("\n Enter the value of num : ");
        scanf("%d",&num);
        do
        { 
         
          sum= sum + i;
          i++;  
        }while( i<=num);
        avg=sum/num;
        printf("\n SUM of first %d numbers = %d",num,sum);
        printf("\n AVERAGE of first %d numbers = %f\n",num,avg);
        return 0;
}        

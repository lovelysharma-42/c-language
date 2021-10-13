//by LOVELY SHARMA
/*a program to calculate the average of numbers entered by the user by using while loop.*/
#include <stdio.h>
int main(void) 
{
        int num,sum= 0,count = 0; 
        float avg;
        printf("\n enter any number. Enter -1 to STOP: ");
        scanf("%d",&num);
        while(num != -1)
        { 
          count++;
          sum= sum + num;
          
          printf("\n enter any number. Enter -1 to STOP: ");
          scanf("%d",&num);  
        }
        avg = sum/count;
        printf("\n SUM =%d",sum);
        printf("\n AVERAGE =%f",avg);
       
        return 0;
}        

//by LOVELY SHARMA
/*a program to calculate the average of numbers entered by the user by using for loop.*/
#include <stdio.h>
int main(void) 
{
        int num,i =1,sum= 0; 
        float avg=0.0;
        printf("\n Enter the value of num : ");
        scanf("%d",&num);
        for(i=1;i<=num;i++)
         sum= sum + i;
        avg=(float)sum/num;
        printf("\n SUM of first %d numbers = %d",num,sum);
        printf("\n AVERAGE of first %d numbers = %f\n",num,avg);
        return 0;
}        

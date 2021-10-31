//by LOVELY SHARMA
/*a program to generate calendar of a month given the start day of the week and the number of days in that month. */
#include <stdio.h>
int main() 
{
        int i,j,startDay,num_of_days;
        printf("\nEnter the starting day of the week(1 to 7):");
	scanf("%d",&startDay);
	printf("\nEnter number of days in that month:");
	scanf("%d",&num_of_days);
	printf("\n Su M T W Th F Sa");
        for(i=0;i<startDay-1;i++)
        {
          printf(" \n");
          for(j=1;j<=num_of_days;j++)
           {
             if(i>6)
             {
               printf("\n");
               i=1;
             }
             else
             i++;
             printf("%2d ",j);
           }
        
       }   
        return 0;
}        

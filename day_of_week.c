//by LOVELY SHARMA
//desicion control statements practice
//a program to enter a number from 1-7 and display the corresponding day of the week using switch case.
#include <stdio.h>
int main(void) 
{
        int day_no;
        printf("Enter any number from 1 to 7 :  ");
        scanf("%d",&day_no);
        switch(day_no)
        {
         case 1:
         printf("\n SUNDAY");
         break;
           
         case 2:
         printf("\n MONDAY");
         break;
         
         case 3:
         printf("\n TUESDAY");
         break;
         
         case 4:
         printf("\n WEDNESDAY");
         break;
         
         case 5:
         printf("\n THURSDAY");
         break;
         
         case 6:
         printf("\n FRIDAY");
         break;
         
         case 7:
         printf("\n SATURDAY");
         break;
         
         default:
           printf("\n WRONG NUMBER");
         }
        return 0;
}        

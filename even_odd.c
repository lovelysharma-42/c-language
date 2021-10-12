//by LOVELY SHARMA
//desicion control statements practice
//a program that accepts a number from 1-10 .Print whether the number is even or odd using switch case.
#include <stdio.h>
int main(void) 
{
        int num,rem;
        printf("Enter any number from 1 to 10 :  ");
        scanf("%d",&num);
        rem=num%2;
        switch(rem)
        {
         case 0:
         printf("\n even\n");
         break;
           
         case 1:
         printf("\n odd\n");
         break;
        
         }
        return 0;
}        

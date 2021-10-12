//by LOVELY SHARMA
//desicion control statements practice
//a program to display the grades using switch.
#include <stdio.h>
int main(void) 
{
        char grades='C';
        switch(grades)
        {
         case 'O':
         printf("\n Outstanding ");
         break;
 
         case 'A':
         printf("\n Excellent");
         break;
         
         case 'B':
         printf("\n Good");
         break;
         
         case 'C':
         printf("\n Satisfactory");
         break;
         
         case 'F':
         printf("\n Fail");
         break;
         
         default:
           printf("\n Invalid grade ");
         }
        return 0;
}        

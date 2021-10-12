//by LOVELY SHARMA
//desicion control statements practice
//a program to determine whether an entered character is a vowel or not using switch.
#include <stdio.h>
int main(void) 
{
        char ch;
        printf("Enter a character :  ");
        scanf("%c",&ch);
        switch(ch)
        {
         case 'A':
         case 'a':
         printf("\n %c is vowel",ch);
         break;
            
         case 'E':
         case 'e':
         printf("\n %c is vowel",ch);
         break;
         
         case 'I':
         case 'i':
         printf("\n %c is vowel",ch);
         break;
         
         case 'O':
         case 'o':
         printf("\n %c is vowel",ch);
         break;
         
         case 'U':
         case 'u':
         printf("\n %c is vowel",ch);
         break;   
       
         default:
           printf("\n %c is not a vowel",ch);
         }
        return 0;
}        

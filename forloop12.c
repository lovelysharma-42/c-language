//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
A
AB
ABC
ABCD
ABCDE
*/
#include <stdio.h>
int main(void) 
{
        char i,j;
       
        for(i=65;i<=70;i++)
        {
         
         printf("\n");
         for(j=65;j<=i;j++)
          printf("%c",j);
             
        }
        return 0;
}        

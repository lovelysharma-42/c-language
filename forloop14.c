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
        char i,j,k;
       
        for(i=65;i<=69;i++)
        {
         
         for(k=69;k>=i;k--)
          printf(" ");
         for(j=65;j<=i;j++)
          printf("%c",j);
         printf("\n");   
        }
        return 0;
}        

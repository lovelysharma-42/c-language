//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
*
**
***
****
*****
******
*******
********
*********
**********
***********
*/
#include <stdio.h>
int main(void) 
{
        int i,j;
       
        for(i=1;i<=10;i++)
        {
         
         printf("\n");
         for(j=1;j<=i;j++)
          printf("*");
             
        }
        return 0;
}        

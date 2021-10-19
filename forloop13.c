//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
    1
   12
  123
 1234
12345
*/
#include <stdio.h>
int main(void) 
{
        int i,j,k;
       
        for(i=1;i<=5;i++)
        {
         for(k=5;k>=i;k--)
         printf(" ");
         for(j=1;j<=i;j++)
          printf("%d",j);
         printf("\n"); 
             
        }
        return 0;
}        

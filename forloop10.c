//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
1
22
333
4444
55555
*/
#include <stdio.h>
int main(void) 
{
        int i,j;
       
        for(i=1;i<=5;i++)
        {
         
         printf("\n");
         for(j=1;j<=i;j++)
          printf("%d",i);
             
        }
        return 0;
}        

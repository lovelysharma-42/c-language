//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
0
12
345
6789
*/
#include <stdio.h>
int main(void) 
{
        int i,j,count=0;
       
        for(i=1;i<=4;i++)
        {
         
         printf("\n");
         for(j=1;j<=i;j++)
          printf("%d",count++);
             
        }
        return 0;
}        

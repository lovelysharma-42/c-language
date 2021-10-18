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
        int i,j;
       
        for(i=1;i<=5;i++)
        {
         
         printf("\n");
         for(j=1;j<=i;j++)
          printf("%d",j);
             
        }
        return 0;
}        

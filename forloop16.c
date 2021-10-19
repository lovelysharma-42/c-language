//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5
*/
#include <stdio.h>
int main(void) 
{
        int i,j,k;
       
        for(i=1;i<=5;i++)
        {
         
         for(k=1;k<=5;k++)
          printf(" ");
      
         for(j=1;j<=i;j++)
          printf("%2d",j);
          printf("\n");
        }
        return 0;
}        

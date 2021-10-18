//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
Pass 1- 1 2 3 4 5
Pass 2- 1 2 3 4 5
Pass 3- 1 2 3 4 5
Pass 4- 1 2 3 4 5
Pass 5- 1 2 3 4 5
*/
#include <stdio.h>
int main(void) 
{
        int i,j;
       
        for(i=1;i<=5;i++)
        {
         
         printf("\n Pass %d- ",i);
         for(j=1;j<=5;j++)
          printf(" %d",j);
             
        }
        return 0;
}        

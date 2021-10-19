//by LOVELY SHARMA
/*a program which prints  the following pattern using for loop.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>
int main(void) 
{
        int i,j,k,c;
       
        for(i=1;i<=5;i++)
        {
         
         for(k=1;k<=5;k++)
          printf(" ");
         for(j=1;j<=i;j++)
          printf("%2d",i);
          printf("\n");
          c--;
             
        }
        return 0;
}        

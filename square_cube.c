//by LOVELY SHARMA
/*a program using a do-while loop to display the square and cube of first n natural numbers using do while loop.*/
#include <stdio.h>
int main(void) 
{
        int i=1,n; 
        printf("\n Enter the value of n : ");
        scanf("%d",&n);
        printf("\n---------------------------------------------------------");
        do
        { 
          printf("\n | \t %d \t | \t %d \t | \t %d \t |",i,i*i,i*i*i);
          i++;  
        }while( i<=n);
        printf("\n----------------------------------------------------------");
        return 0;
}        

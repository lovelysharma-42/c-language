//by LOVELY SHARMA
//a program using for loop to print all the numbers from m to n , thereby classifying them as even or odd.
#include <stdio.h>
int main(void)
{
        int m,n,i;
        printf("enter the value of m : ");
        scanf("%d",&m);
        printf("enter the value of n : ");
        scanf("%d",&n);
        for(i=m;i<=n;i++)
        {
          if(i%2==0)
           printf("\n %d is Even.",i);
          else
           printf("\n % d is Odd.",i); 
        }
       
        return 0;
}        

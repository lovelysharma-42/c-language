//by LOVELY SHARMA
//a program to print 20 asterisks in a horizontal line using do while loop and another while loop for 20 vertical asteriskshashasterisks.
#include <stdio.h>
int main(void) 
{
        int i = 1;
        do
        {
          printf("*");
          i++;
        }   while(i<=20);
        int j=1;
        while(j<=20)
        {
          printf("\n* # *");
          j++;
        }
        
        return 0;
}        

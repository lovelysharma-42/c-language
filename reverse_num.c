//by LOVELY SHARMA
//a program to find reverse of a number.
#include <stdio.h>
int main(void) 
{
        int num,temp = 0;
        printf("\n Enter the number :");
        scanf("%d",&num);
        printf("\n the reversed number is : ");
        while(num != 0)
        {
          temp = num%10; 
          printf("%d",temp);
          num = num/10;
        }
        
        return 0;
}        

//written by Lovely sharma
//date : 5 oct,2021
//program to find largest number three numbers accepted from user using ternary operator or say conditional operator.
#include <stdio.h>

int main(void) 
{
      int d1,d2,d3,large;
      printf("enter three numbers \n");
      scanf("%d %d %d",&d1,&d2,&d3);
      large=d1>d2?(d1>d3?d1:d2):(d2>d3?d2:d3);
      printf("The largest number is :%d",large);
      
      return 0;
}

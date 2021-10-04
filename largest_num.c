//written by Lovely sharma
//date : 4 oct,2021
//program to find largest number three numbers accepted from user.
#include <stdio.h>

int main(void) {
      int d1,d2,d3;
      printf("enter three numbers \n");
      scanf("%d %d %d",&d1,&d2,&d3);
      if(d1>d2&&d2>d3)
      printf("d1 is largest number");
      else if(d2>d1&&d2>d3)
      printf("d2 is largest number");
      else
      printf("d3 is largest number");
      
      
        return 0;
}

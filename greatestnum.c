//written by Lovely sharma
//date : 9 oct,2021
//program to find greatest number three numbers accepted from user.
#include <stdio.h>

int main(void) {
      int d1,d2,d3;
      printf("enter three numbers \n");
      scanf("%d %d %d",&d1,&d2,&d3);
      if(d1>d2)
      {
      if(d1>d3)
      printf("%d is greater than %d and %d ",d1,d2,d3);
      else
      printf("%d is greater than %d and %d ",d3,d1,d2);
      }
      else if(d2>d3)
      printf("%d is greater than %d and %d ",d2,d1,d3);
      else
      printf("%d is greater than %d and %d ",d3,d1,d2);
      
      return 0;
}

//written by Lovely sharma
//date : 4 oct,2021
//program to accept a  4 digit number from user. find reverse of it and product of digit.

#include <stdio.h>

int main(void) {
      int n,n1,d1,d2,d3,product;
      printf("enter a 4 digit number: ");
      scanf("%d",&n);
      d1=n%10;
      n=n/10;
      d2=n%10;
      n=n/10;
      d3=n%10;
      n=n/10;
      n1=(d1*1000)+(d2*100)+(d3*10)+n;
      product=d1*d2*d3*n;
      printf("The reverse number is=%d\n",n1);
      printf("The product is=%d\n",product);
     
    
      
        return 0;
}
 

//written by Lovely sharma
//date : 3 oct,2021
//program to add,substract,multiply,divide and get remainder of two numbers.
// we know that +,-,*,/,% are arithmetic operators.
//By taking the values of the two numbers from the users.
#include <stdio.h>

int main(void) {
      int a,b,sum,sub,product,rem,division;
      printf("enter the values of two numbers: ");
      scanf("%d %d",&a,&b);
      sum=a+b;
      sub=a-b;
      product=a*b;
      division=a/b;
      rem=a%b;
      printf("The sum of the two numbers is=%d\n",sum);
      printf("The difference of the two numbers is =%d\n",sub);
      printf("The product of the two numbers is=%d\n",product);
      printf("The division of the two numbers is=%d\n",division);
      printf("The remainder of the two numbers is=%d\n",rem);
      
      
        return 0;
}

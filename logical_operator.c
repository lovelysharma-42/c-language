//written by Lovely sharma
//date : 4 oct,2021 & time : 6:01pm
//program to see how logical operator works.
// 0 output represnts false and 1 represents true.
//By assigning the values of the three numbers.
#include <stdio.h>

int main(void) {
      int a=10,b=9,c=5;
      int result1,result2,result3,result4;
     
      result1=a>b||b>c||b==c||b!=a;
      result2=a>b&&c>=a||a==b;
      result3=a!=c||a!=b||b==c;
      result4=a>b&&b>c&&c==a;
      printf("The value of result1 is=%d\n",result1);
      printf("The value of result2 is=%d\n",result2);
      printf("The value of result3 is=%d\n",result3);
      printf("The value of result4 is=%d\n",result4);
      
      
        return 0;
}

//by LOVELY SHARMA
//Oct 25,2021
// a program to show the usage of break statement
#include<stdio.h>
int main()
{
 int i;
 for (i=0; i<1000; i++)
 {
 printf("%d\n",i);
 if (i==5)
 {
  break;
 }
 }
 return 0;
}

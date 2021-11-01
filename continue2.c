//by  LOVELY SHARMA
//PROGRAM FOR EXAMPLE OF - C continue statement continues for only inner loop, but not for outer loop.
#include<stdio.h>  
int main(){  
int i=1,j=1;//initializing a local variable    
for(i=1;i<=3;i++){      
for(j=1;j<=3;j++){    
if(i==2 && j==2){    
continue;//will continue loop of j only
//2 2 is not printed on the console because inner loop is continued at i==2 and j==2    
}    
printf("%d %d\n",i,j);    
}    
}  
return 0;  
}

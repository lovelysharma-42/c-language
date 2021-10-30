//by LOVELY SHARMA
/*a program using for loop to calculate the value of an investment ,given the initial value of investment and the annual interest.Calculate the value of investment over a period of time.*/
#include <stdio.h>
int main() 
{
        double ini_value,future_value,ROI;
        int time,i;
        printf("\nEnter the investment value :");
	scanf("%lf",&ini_value);
	printf("\nEnter rate of interest :");
	scanf("%lf",&ROI);
	printf("\nEnter the no. of years for which investment has to be done :");
	scanf("%d",&time);
	future_value=ini_value;
	printf("\n YEAR \t\t VALUE");
	printf("\n------------------------");
        for(i=1;i<=time;i++)
        {
         future_value*=(1+ROI/100.0);
         printf("\n %d \t %lf",i,future_value);
        }   
        return 0;
}        

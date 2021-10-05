//by LOVELY SHARMA
//the area and circumference of a circle .

#include <stdio.h>
#define pi 3.14159
int main(void) {
        int radius;
        double areaofcircle,circumference;
        printf("Enter the radius of circle:\n");
	scanf("%d",&radius);
	areaofcircle= pi*radius*radius;
	circumference= 2*pi*radius;
	printf("The area of cicle = %lf\n",areaofcircle);
	printf("The circumference of circle =%lf\n",circumference);
	return 0;
	}


//by LOVELY SHARMA
//the area of a circle and the same program to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>
#define pi 3.14159
int main(void) {
        int radius,height=15;
        double areaofcircle,volume;
        printf("Enter the radius of circle:\n");
	scanf("%d",&radius);
	areaofcircle= pi*radius*radius;
	printf("The area of cicle = %lf\n",areaofcircle);
	radius=35;
	volume=pi*radius*radius*height;
	printf("The volume of cylinder =%lf\n",volume);
	return 0;
	}


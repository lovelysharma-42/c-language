//by Lovely sharma, date 4 oct,2021
/*program to demonstrate the use of printf statement and scanf statements to read and  print values of variables of different data types.*/
#include <stdio.h>

int main(void)
{
        char section;
        char name[30];
        int num_of_student;
        double fees;
        long int total_student;
        printf("Enter the name of student:");
	scanf("%[^\n]%*c",name);
	printf("Enter the section name:");
	scanf("%c",&section);
	printf("Enter the number of student in section:");
	scanf("%d",&num_of_student);
	printf("Enter the total number of student in the school:\n");
	scanf("%ld",&total_student);
        printf("Enter the monthly fees of the student:");
	scanf("%lf",&fees);
        printf("\n Name=%s \n Section=%c \n NUM of student=%d \n total_student=%ld \n fees=%lf",name,section,num_of_student,total_student,fees);

	return 0;
}

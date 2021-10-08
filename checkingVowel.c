//BY LOVELY SHARMA
/* program to enter any character then determine whether it is a vowel or not.*/

#include <stdio.h>
int main(void)
{
        char ch;
        printf("\n press any alphabetical letter of your choice:");
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' ||ch=='e' || ch=='E' ||ch=='i' || ch=='I' ||ch=='o' || ch=='O' ||ch=='u' || ch=='U')
	printf("\n %c is a Vowel",ch);
	else
	printf("\n %c is not a Vowel",ch);
	return 0;
}


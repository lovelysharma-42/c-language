//by LOVELY SHARMA
/* program to take input of any character i.e letter by the user .Then if the entered character is in upper case then convert it into lower case and if it is in lower case thenconvert it into upper case.*/

#include <stdio.h>
int main(void)
{
        char ch;
        printf("\n press any alphabetical letter of your choice:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("\n The entered character is in uppercase. In lower case it is:%c",(ch+32));
	else
	printf("\n The entered character is in lower case. In upper case it is:%c",(ch-32));
	return 0;
}


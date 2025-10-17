#include<stdio.h>
int main ()
{
	char str[100];
	printf("Enter a string : ");
	scanf("%[A-Z,a-z]",str);
	printf("You entered : %s\n",str);
		
	return 0;
}

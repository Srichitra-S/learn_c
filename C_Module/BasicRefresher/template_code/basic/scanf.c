/*
 * Srichitra
 * Program to demonstrate the space in scanf
 */

#include <stdio.h>

int main()
{
	int num;
	char ch;
	printf("Enter a number and a character: ");
	scanf("%d %c", &num, &ch);
	printf("Number is: %d\nCharacter: %c\n",num,ch);

	return 0;

}

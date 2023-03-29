#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int len;
	char s[81];

	printf("Enter a string: ");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++);
	printf("±æÀÌ´Â %d\n", i);
	len = i;
	for (i = len - 1; i >= 0; i--)
		printf("%c\n", s[i]);
	
}
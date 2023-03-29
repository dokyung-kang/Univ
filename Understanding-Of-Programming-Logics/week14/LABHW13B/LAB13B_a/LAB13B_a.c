#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char word[11];

	printf("Enter a word(<= chars): ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
		if (i % 2 == 0)
			printf("%c", word[i]);

	return 0;
}
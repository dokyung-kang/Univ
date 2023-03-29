#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;

	char digits[] = "0123456789";
	char abc[] = { 'A', 'B', 'C', '\0' };
	char lan[5] = "Java";

	printf("%s %s\n", digits, abc);

	printf("%s\n", lan);

	for (i = 0; lan[i] != '\0'; i++)
		printf("%c", lan[i]);

	digits[6] = '\0';
	printf("\n%s\n", digits);

	return 0;
}
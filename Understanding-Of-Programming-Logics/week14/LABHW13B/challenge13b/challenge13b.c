#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n = 0;
	int total = 0;
	char str[100];

	printf("Enter a word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (48 <= str[i] && str[i] <= 57)
			n = n * 10 + str[i] - 48;
		if (48 > str[i + 1] || str[i + 1] > 57)
		{
			total += n;
			n = 0;
		}
	}
	printf("글자 안의 수의 합은 %d", total);

	return 0;
}
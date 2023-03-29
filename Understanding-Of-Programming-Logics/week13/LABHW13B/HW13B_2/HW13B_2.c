#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int total = 0;
	char str[100];

	printf("Enter one word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
			total += str[i] - 48;
	}
	printf("안에 있는 숫자들의 합은 %d", total);

	return 0;
}
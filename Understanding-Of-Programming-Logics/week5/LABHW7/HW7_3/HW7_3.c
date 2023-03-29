#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, i, result;

	printf("Enter a number: ");
	scanf("%d", &num);

	i = 1;
	result = 1;
	while (i <= num)
	{
		result *= i;
		i++;
	}
	printf("%d 의 Factorial 값은 %d 이다.\n", num, result);

	return 0;
}
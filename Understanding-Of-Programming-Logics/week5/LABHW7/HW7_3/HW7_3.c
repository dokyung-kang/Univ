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
	printf("%d �� Factorial ���� %d �̴�.\n", num, result);

	return 0;
}
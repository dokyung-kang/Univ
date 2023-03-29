#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, number;
	int ones = 0;
	printf("Enter a number : ");
	scanf("%d", &number);

	i = 1;
	while (i <= number)
	{
		ones = ones * 10 + 1;
		printf("%d \n", ones);
		i++;
	}
}
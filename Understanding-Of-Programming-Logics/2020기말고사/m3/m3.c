#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_odd_digit(int num);
int main(void)
{
	int num;

	scanf("%d", &num);
	num *= 3;

	print_odd_digit(num);

	return 0;
}
void print_odd_digit(int n)
{
	int i, j;
	int dividend;
	int total = 0;
	for (i = 0; n != 0; i++)
	{
		dividend = n % 10;
		n /= 10;
		if (dividend == 1)
			continue;
		else if (dividend % 2 != 0)
			total += dividend;
	}
	printf("%d", total);
}
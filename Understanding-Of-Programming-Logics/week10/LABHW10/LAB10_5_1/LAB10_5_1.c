#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_divisor(int n);
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	print_divisor(num);
}
void print_divisor(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			printf("%d\n", i);
}
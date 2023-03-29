#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;
	printf("Enter a number(-1 for exit): ");
	scanf("%d", &num);
	while (num != -1)
	{
		get_cycle_number(num);
		printf("Enter a number(-1 for exit): ");
		scanf("%d", &num);
	}

	return 0;
}
int get_cycle_number(int n)
{
	int count;

	printf("%d ", n);
	count = 1;
	while (n > 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		printf("%d ", n);
		count++;
	}
	printf("\n±æÀÌ´Â %d\n", count);
	return 0;
}
	
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int total(int n);
int main(void)
{
	int n;

	printf("Input a number(-1 for exit): ");
	scanf("%d", &n);
	while (n != -1) {
		printf("1���� %d������ ���� %d\n", n, total(n));
		printf("Input a number(-1 for exit): ");
		scanf("%d", &n);
	}
}

int total(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
		sum += i;
	return sum;
}
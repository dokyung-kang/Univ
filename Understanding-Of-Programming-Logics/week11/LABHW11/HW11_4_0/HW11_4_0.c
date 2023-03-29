#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++)
		if (n % i == 0)
			break;

	if (i == n)
		printf("소수입니다.");
	else
		printf("소수가 아닙니다.");
}
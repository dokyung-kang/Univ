#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int len = 0;
	int rN = 0;

	scanf("%d", &n);

	n *= 9;

	while (n != 0) {
		rN = rN * 10 + (n % 10);
		n /= 10;
	}

	while (rN != 0) {
		printf("%d ", rN % 10);
		rN /= 10;
	}
}
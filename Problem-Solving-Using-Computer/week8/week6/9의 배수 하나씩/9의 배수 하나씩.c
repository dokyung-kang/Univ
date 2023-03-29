#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, tempN;
	int len = 0;
	int rN[10000];
	int i;

	scanf("%d", &n);

	n *= 9;

	tempN = n;
	while (tempN != 0) {
		tempN /= 10;
		len++;
	}

	while (n != 0) {
		rN[i] = (n % 10);
		n /= 10;
		i++;
	}
	rN[i] = '\0';

	for (i = len - 1; i >= 0; i--)
		printf("%d ", rN[i]);
}
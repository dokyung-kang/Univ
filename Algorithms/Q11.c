#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	long long len = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; ) {
		len += (n - i + 1);
		i *= 10;
	}

	printf("%d", len);
}
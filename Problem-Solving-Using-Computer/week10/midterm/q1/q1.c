#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[1000];
	int n;
	int k;
	int i = 0;
	int cnt = 0;

	scanf("%d %d", &n, &k);

	while (n != 0) {
		num[i] = n % k;
		n /= k;
		cnt++;
		i++;
	}

	for (i = cnt - 1; i >= 0; i--)
		printf("%d ", num[i]);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int H(int n);
int main(void)
{
	int i, n;
	scanf("%d", &n);

	printf("H(n) = %d\n", H(n));
	for (i = 0; i <= n; i++)
		printf("i = %dÀÏ¶§ %d\n", i, H(i));
}

int H(int n)
{
	int i;
	int sum = 0;

	if (n == 0 || n == 1)
		return 1;
	else {
		for(i = 0; i < n; i++)
			sum += H(i) * H(n - i - 1);
		return sum;
	}
}
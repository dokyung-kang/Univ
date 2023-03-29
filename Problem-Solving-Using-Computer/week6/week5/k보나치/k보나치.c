#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int k_bonacci(int k, int n)
{
	int i;
	int sum = 0;

	if (n <= k)
		return 1;
	else {
		for (i = 1; i <= k; i++)
			sum += k_bonacci(k, n - i);
		return sum;
	}
}
int main(void)
{
	int k;
	int n;

	printf("ют╥б: ");
	scanf("%d %d", &k, &n);
	printf("%d", k_bonacci(k, n));
}
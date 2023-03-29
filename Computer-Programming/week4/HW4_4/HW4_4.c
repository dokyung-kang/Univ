#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int comb(int n, int r)
{
	int i;
	int  total = 1;
	if (r == 0 || r == n)
		return 1;
	else {
		for (i = n; i >= n - r + 1; i--) 
			total *= i;
		for (i = r; i > 0; i--)
			total /= i;
		return total;
	}
}

int main(void)
{
	int n, r;

	printf("Enter n and r:");
	scanf("%d %d", &n, &r);
	printf("%d", comb(n, r));
	return 0;
}
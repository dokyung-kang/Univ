#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int comb(int n, int r)
{
	printf("comb(%d,%d)\n", n, r);
	if (r == 0 || r == n)
		return 1;
	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
	int n, r;
	printf("Enter n and r of nCr: ");
	scanf("%d %d", &n, &r);

	printf("%dC%d = %d\n", n, r, comb(n, r));
	return 0;
}

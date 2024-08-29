#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int i;
	int dp[1001] = { 0 };
	int tmp;

	scanf("%d", &n);

	dp[1] = 1;
	dp[2] = 2;

	for (i = 3; i <= n; i++) {
		tmp = dp[i - 1] + dp[i - 2];
		dp[i] = tmp % 10007;
	}

	printf("%d", dp[n] % 10007);
}
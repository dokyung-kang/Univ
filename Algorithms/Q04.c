#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int n;
	long long int result = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		result += (n / i) * i;		// N 이하의 자연수가 i이면 i는 g(N)안에서 (N / i) * i 만큼 들어있음
	}

	printf("%lld", result);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 long long twoToThePower(int n)
{
	long long total = 1;
	for (int i = 1; i <= n; i++)
		total *= 2;
	return total;
}
int isPrime(long long x)
{
	int i;
	for (i = 2; i <= x; i++)
		if (x % i == 0)
			break;
	if (i == x)
		return 1;
	else
		return 0;
}
int main(void)
{
	int i, num, prime;
	long long twoN;
	printf("Enter a number:");
	scanf("%d", &num);

	for (i = 2; i <= num; i++)
	{
		twoN = twoToThePower(i) - 1;
		prime = isPrime(twoN);
		if (prime == 1)
			printf("(2^%d - 1) = %lld은 메르센 소수이다\n", i, twoN);
	}
}
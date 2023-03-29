#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long i, n;
	long long result = 1;

	printf("Enter a number:");
	scanf("%lld", &n);

	for (i = 1; i <= n; i++)
	{
		result *= i;
	printf("%lld! = %lld\n", i, result);
	}

	return 0;
}


/*
´ä

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	long long result;

	printf("Enter a number:");
	scanf("%lld", &n);

	result = 1;
	for (i = 1; i <= n; i++)
	{
		result *= i;
	printf("%lld! = %lld\n", i, result);
	}

	return 0;
}

*/
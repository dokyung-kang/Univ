#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;

	if (i == n)
		printf("소수이다\n");
	else
		printf("소수가 아니다\n");

	return 0;
}


/*다른 답 (prime 사용)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, prime, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	prime = 1;
	for (i = 2; i < n; i++)
		if (n % i == 0)
		{
			prime = 0;
			break;
		}

	if (prime == 1)
		printf("소수이다\n");
	else
		printf("소수가 아니다\n");

	return 0;
}

*/
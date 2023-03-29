#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, quotient, remain;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (n >= 0)
	{
		if (n % 2 == 0)
			printf("°úÁ¦¸ØÃç!!");
		else
			printf("1");
		n /= 2;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int sum = 1;

	printf("Enter a number(>=2): ");
	scanf("%d", &n);

	printf("%d! = ", n);

	for (i = n; i >= 1; i--)
	{
		if (i == 1)
			printf("%d", i);
		else
			printf("%d * ", i);
		sum *= i;
	}
	printf(" = %d", sum);

	return 0;
}


/*
´ä

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, sum;

	printf("Enter a number(>=2): ");
	scanf("%d", &n);

	printf("%d! = ", n);

	sum = 1;
	for (i = n; i > 1; i--)
	{
		printf("%d * ", i);
		sum *= i;
	}
	printf("1 = %d", sum);

	return 0;
}
*/
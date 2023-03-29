#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;

	scanf("%d", &n);
	if (1 <= n && n <= 12)
		printf("%d¿ù", n);
	else
		printf("incorrect");
}
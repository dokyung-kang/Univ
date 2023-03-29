#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int carryCount(int n1, int n2)
{
	if (n1 <= 0 || n2 <= 0)
		return 0;
	if ((n1 % 10) + (n2 % 10) <= 9)
		return carryCount(n1 / 10, n2 / 10);
	else
		return carryCount(1 + n1 / 10, n2 / 10) + 1;		
}
int main(void)
{
	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);
	printf("%d", carryCount(num1, num2));
}
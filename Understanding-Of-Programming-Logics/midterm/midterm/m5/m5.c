#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num, newNum, digit;
	int count = 0;

	scanf("%d", &num);
	scanf("%d", &digit);

	newNum = 3 * num;

	for (i = 1; newNum != 0; i++)
	{
		if (newNum % 10 == digit)
			count++;
		newNum /= 10;
	}
	printf("%d", count);
}
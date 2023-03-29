#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;

	do
	{
		printf("Enter a number(양수):");
		scanf("%d", &num);
	} while (num < 0);
	printf("입력된 양수는 %d", num);
}
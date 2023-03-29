#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSum1ToN(int a);
int main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printSum1ToN(n);
}
void printSum1ToN(int a)
{
	int result = 0;
	for (int i = 1; i <= a; i++)
		result += i;
	printf("1~ %dÀÇ ÇÕ: %d", a, result);
}
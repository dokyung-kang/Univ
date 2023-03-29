#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);
int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	findNPrintBiggest(num1, num2, num3);
}
void findNPrintBiggest(int a, int b, int c)
{
	int bigN;
	if (a > b && a > c)
		bigN = a;
	else if (b > a && b > c)
		bigN = b;
	else
		bigN = c;
	printf("The biggest number is %d.\n", bigN);
}
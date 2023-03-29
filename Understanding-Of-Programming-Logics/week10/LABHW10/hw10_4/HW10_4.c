#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSumMToN(int numM, int numN);
int main()
{
	int m, n;
	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);

	printSumMToN(m, n);
	return 0;
}
void printSumMToN(int numM, int numN)
{
	int total = 0;
	int m1;
	m1 = numM;
	for (int i = m1; m1 <= numN; m1++)
		total += m1;
	printf("%d ~ %dÀÇ ÇÕ: %d", numM, numN, total);
}

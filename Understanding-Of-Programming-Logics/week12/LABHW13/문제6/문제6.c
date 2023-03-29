#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findNum(int a, int b);
int main(void)
{
	int num, subNum;
	
	scanf("%d", &num);
	scanf("%d", &subNum);

	printf("%d", findNum(num, subNum));
}
int findNum(int a, int b)
{
	int i = 1;
	int dividend = 1;
	int posB = 0;
	int numB;

	numB = b;
	while (numB != 0)
	{
		numB /= 10;
		posB++;
	}
	while (i <= posB)
	{
		dividend *= 10;
		i++;
	}
	while (a != 0)
	{
		if (a % dividend == b)
			break;
		a /= 10;
	}
	return a;
}
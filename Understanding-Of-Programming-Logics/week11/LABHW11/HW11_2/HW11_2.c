#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	for (int i = 0; i <= 10; i++)
		printf("5 ^ %d == %d\n", i, pow(5, i));
}
int pow(int a, int b)
{
	int total = 1;
	for (int j = 0; j < b; j++)
		total *= a;
	return total;
}
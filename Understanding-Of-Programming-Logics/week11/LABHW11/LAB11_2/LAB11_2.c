#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	int x, y;

	printf("Enter the number X: ");
	scanf("%d", &x);
	printf("Enter the number Y: ");
	scanf("%d", &y);

	printf("%d ^ %d == %d", x, y, pow(x, y));
}
int pow(int a, int b)
{
	int total = 1;
	for (int i = 0; i < b; i++)
		total *= a;
	return total;
}
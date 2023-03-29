#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calFruit(int n)
{
	int num = n;
	int total = 0;

	while (num != 0) {
		total += num % 10;
		num /= 10;
	}
	total += n;
	return total;
}

int main(void) //변경하지 말라
{
	int n;

	scanf("%d", &n);
	printf("%d\n", calFruit(n));
}
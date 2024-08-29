#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int sumNum(int num)
{
	if (num == 1 || num == 2)
		return num;
	else if (num == 3)
		return 4;
	else
		return sumNum(num - 1) + sumNum(num - 2) + sumNum(num - 3);
}

int main(void)
{
	int n;
	int i;
	int num;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		printf("%d\n", sumNum(num));
	}
}
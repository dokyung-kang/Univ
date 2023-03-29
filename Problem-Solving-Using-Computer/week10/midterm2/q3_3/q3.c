#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int carryCount(int n1, int n2, int carry)
{
	if (n1 == 0)
		return 0;
	else {
		if ((n1 % 10) - (n2 % 10) + carry < 0)
			return carryCount(n1 / 10, n2 / 10, -1) + 1;
		else
			return carryCount(n1 / 10, n2 / 10, 0);
	}
}

int main(void)
{
	int n1;
	int n2;

	scanf("%d %d", &n1, &n2);

	printf("%d", carryCount(n1, n2, 0));
}
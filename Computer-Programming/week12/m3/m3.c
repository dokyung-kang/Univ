#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int ch(int n) 
{
	int cN = 0;
	while (n != 0) {
		cN = cN * 10 + n % 10;
		n /= 10;
	}
	return cN;
}

int main(void)
{
	int n1;
	int n2;
	int cnt = 0;
	int p = 0;

	scanf("%d", &n1);
	n2 = ch(n1);
	if (n1 == n2)
		p = 1;
	else
		cnt++;
	while (!(ch(n1 + n2) == n1 + n2) && p == 0) {
		n1 += n2;
		n2 = ch(n1);
		cnt++;
	}

	if (n1 + n2 < 0)
		printf("Overflow");
	else if (p == 1)
		printf("%d %d", cnt, n1);
	else
		printf("%d %d", cnt, n1 + n2);
}
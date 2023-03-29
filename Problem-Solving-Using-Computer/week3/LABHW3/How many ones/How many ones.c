#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isOne(int c)
{
	int cnt = 0;
	while (c != 0) {
		if (c % 10 != 1)
			return -1;
		c /= 10;
		cnt++;
	}
	return cnt;
}
int main(void)
{
	int A;
	int C;
	int B;
	int cnt;

	scanf("%d", &A);
	for(B = 1;; B++) {
		C = A * B;
		if ((cnt = isOne(C)) != -1) {
			printf("%d", cnt);
			break;
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calculateReverse(int n)
{
	int reverseN = 0;

	while (n != 0) {
		reverseN = reverseN * 10 + n % 10;
		n /= 10;
	}
	return reverseN;
}

int isP(int s)
{
	int i;
	int sR;
	sR = calculateReverse(s);
	while (s != 0) {
		if ((s % 10) != (sR % 10))
			return 0;
		s /= 10;
		sR /= 10;
	}
	return 1;
}

int main(void)
{
	int n;
	int cnt = 0;
	int sum = 0;
	int pN;

	scanf("%d", &n);
	pN = n;
	if (isP(n))
		printf("%d %d", cnt, n);
	else {
		while (sum >= 0) {
			sum = pN + calculateReverse(pN);
			if (sum < 0) {
				printf("Overflow");
				break;
			}
			if (isP(sum)) {
				cnt++;
				printf("%d %d", cnt, sum);
				break;
			}
			else {
				cnt++;
				pN = sum;
			}
		}
	}
}
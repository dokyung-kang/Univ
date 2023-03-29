#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int make(int n, int k, int num[])
{
	int nu = 0;
	int i = 0;
	int cnt = 0;

	while (n != 0) {
		nu = nu * 10 + (n % k);
		n /= k;
		cnt++;
		i++;
	}
	return nu;
}

void printN(int num[], int size)
{
	int i;

	 do {
		printf("%d ", size % 10);
		size /= 10;
	 } while (size != 0);
}

int main(void)
{
	int num[1000];
	int n;
	int k;
	int i = 0;
	int cnt;

	scanf("%d %d", &n, &k);

	cnt = make(n, k, num);
	printN(num, cnt);
}
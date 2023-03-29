#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int c(int n)
{
	int cnt = 0;
	while (n != 0) {
		n /= 10;
		cnt++;
	}
	return cnt;
}

int main(void)
{
	int n;
	int cnt = 0;
	int i;
	int j;
	int ten = 1;
	int tlen;
	int temp;
	int isF = 0;
	int num;
	int a[100];
	int aa = 1;
	int last;
	int last0 = 0;

	scanf("%d", &n);
	num = n;
	for (i = 1; i <= n; i++) {
		temp = i;
		last0 = 0;
		ten = 1;
		if (temp < 10) {
			cnt++;
			a[aa++] = temp;
		}
		else {
			if (temp % 10 == 0)
				last0 = 1;
			tlen = c(temp);
			for (j = 0; j < tlen - 1; j++)
				ten *= 10;
			while (temp != 0) {
				cnt++;
				a[aa++] = temp / ten;
				if (cnt == num) {
					printf("%d", temp / ten);
					isF = 1;
					break;
				}
				temp %= ten;
				ten /= 10;
			}
			if (last0 == 1) {
				cnt++;
				a[aa++] = 0;
				if (cnt == num) {
					printf("0");
					isF = 1;
				}
			}
		}
		if (isF == 1)
			break;
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int leng(int n, int t[]) {
	int cnt = 0;
	int i = 0;
	while (n != 0) {
		t[i++] = n % 10;
		n /= 10;
		cnt++;
	}
	return cnt;
}
int main(void)
{
	int n;
	int i;
	int a[999] = { 0 };
	int t[999] = { 0 };
	int idx = 1;
	int temp;
	int len;
	int j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		temp = i;
		if (temp < 10)
			a[idx++] = temp;
		else {
			len = leng(temp, t);
			for (j = len - 1; j >= 0; j--)
				a[idx++] = t[j];
		}
	}
	printf("%d", a[n]);
}
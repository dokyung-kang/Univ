#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int cnt = 0;
	int i;
	int temp;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		temp = i;
		while (temp != 0) {
			temp /= 10;
			cnt++;
		}
	}
	printf("%d", cnt);
}
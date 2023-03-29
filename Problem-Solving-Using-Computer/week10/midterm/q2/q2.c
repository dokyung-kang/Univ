#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num[1000];
	int reverse[1000];
	int n;
	int k;
	int i = 0;
	int j = 0;
	int cnt = 0;

	scanf("%d %d", &n, &k);

	while (n != 0) {
		num[i] = n % k;
		n /= k;
		cnt++;
		i++;
	}

	for (i = cnt - 1; i >= 0; i--) {
		reverse[j] = num[i];
		j++;
	}
	for (i = 0; i < cnt; i++) {
		if (num[i] != reverse[i]) {
			printf("0");
			break;
		}
	}
	if (i == cnt)
		printf("1");
}
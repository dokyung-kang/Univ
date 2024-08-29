#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;	// 주어진 수 개수
	int num;	
	int cnt = 0;	// 소수 개수
	int i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num);

		for (j = 2; j < num; j++)
			if (num % j == 0)
				break;
		if (j == num)
			cnt++;
	}
	printf("%d", cnt);
}
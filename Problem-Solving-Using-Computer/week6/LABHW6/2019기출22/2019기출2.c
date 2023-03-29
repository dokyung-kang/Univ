#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count(int n)
{
	int cnt = 0;

	while (n != 0) {
		cnt++;
		n /= 10;
	}

	return cnt;
}

int main(void)
{
	int n;
	int three = 3;
	int cnt;
	int threeN;
	int s[1000];
	int i;
	int j = 2;
	int k;

	scanf("%d", &n);
	for (i = 0; i < n;) {
		if (three > 9) {
			cnt = count(three);
			threeN = three;
			for (k = i + cnt - 1; k >= i; k--) {
				s[k] = threeN % 10;
				threeN /= 10;
			}
			i = i + cnt;
		}
		else {
			s[i] = three;
			i++;
		}
		three = 3 * j++;
	}

	printf("%d", s[n - 1]);
}
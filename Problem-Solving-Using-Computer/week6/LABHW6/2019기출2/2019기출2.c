#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int reverse(int num) {
	int rN = 0;

	while (num != 0) {
		rN = rN * 10 + num % 10;
		num /= 10;
	}
	return rN;
}
int main(void)
{
	int n;
	int i = 2;
	int cnt = 1;
	int num = 3;
	int placeN = num;

	scanf("%d", &n);

	while (cnt != n) {
		if (3 * i < 10) { 
			num = 3 * i;
			placeN = num;
			cnt++;
		}
		else {
			num = 3 * i;
			while ((num = reverse(num)) != 0) {
				placeN = num % 10;
				num /= 10;
				cnt++;
				if (cnt == n)
					break;
			}
		}
		i++;
	}

	printf("%d", placeN);
}
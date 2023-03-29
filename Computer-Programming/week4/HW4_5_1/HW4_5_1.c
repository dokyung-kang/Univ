#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d", get_cycle_number(num));
}

int get_cycle_number(int n)
{
	int cnt;
	printf("%d ", n);
	for (cnt = 1; n != 1; cnt++) {
		if (n % 2 == 0) {
			n /= 2;
			printf("%d ", n);
		}
		else {
			n = n * 3 + 1;
			printf("%d ", n);
		}
	}
	printf("\n");
	return cnt;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int n1;
	int n2;
	int gcd = 1;	// 최대공약수
	int lcm;	// 최소공배수

	scanf("%d %d", &n1, &n2);

	for (i = 1; (i <= n1) && (i <= n2); i++) {
		if ((n1 % i == 0) && (n2 % i == 0)) {
			gcd = i;
		}
	}

	lcm = (n1 * n2) / gcd;	// 최소공배수 = 두 자연수의 곱 / 최대공약수

	printf("%d\n", gcd);
	printf("%d", lcm);
}
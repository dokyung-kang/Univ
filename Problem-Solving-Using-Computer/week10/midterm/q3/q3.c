#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1;
	int n2;
	int i;
	int carry = 0;
	int cnt = 0;

	scanf("%d %d", &n1, &n2);

	while (n1 != 0) {
		if ((n1 % 10) - (n2 % 10) + carry < 0) {
			carry = -1;
			cnt++;
		}
		else
			carry = 0;
		n1 /= 10;
		n2 /= 10;
	}
	printf("%d", cnt);
}
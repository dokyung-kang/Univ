#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int carryCount(int n1, int n2)
{
	int carry = 0;
	int cnt = 0;
	
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

	return cnt;
}

int main(void)
{
	int n1;
	int n2;

	scanf("%d %d", &n1, &n2);

	printf("%d", carryCount(n1, n2));
}
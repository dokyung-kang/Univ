#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int carryCount(int n1, int n2)
{
	int carry = 0;
	int cnt = 0;

	while (n1 != 0 && n2 != 0) {
		if (n1 % 10 + n2 % 10 + carry > 9) {
			carry = 1;
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
	int num1;
	int num2;
	
	scanf("%d %d", &num1, &num2);
	printf("%d", carryCount(num1, num2));
}
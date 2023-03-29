#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int eachDigits(int n)
{
	// 여기를 재귀적으로 작성
	int total = 0;
	if (n == 0)
		return 0;
	else {
		total += n % 10 + eachDigits(n / 10);
		printf("%d ", n % 10);
		return total;
	}
}

int main(void) // 변경하지 말라
{
	int num;
	scanf("%d", &num);
	printf("\n%d\n", eachDigits(num));
}
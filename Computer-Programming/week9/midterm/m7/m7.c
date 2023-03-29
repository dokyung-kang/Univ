#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calFruit(int n) // 필요하면 사용한다
{
	// 앞의 문제의 코드
	int num = n;
	int total = 0;

	while (num != 0) {
		total += num % 10;
		num /= 10;
	}
	total += n;
	return total;
}

int is_Fruit(int n)
{
	// 여기를 작성
	int i;
	for (i = 1; calFruit(i) <= n + 10; i++) {
		if (calFruit(i) == n)
			return 1;
	}
	return 0;
}
int main(void) //변경하지 말라
{
	int i;
	int a, b;

	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		if (!is_Fruit(i))
			printf("%d ", i);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calFruit(int n) // �ʿ��ϸ� ����Ѵ�
{
	// ���� ������ �ڵ�
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
	// ���⸦ �ۼ�
	int i;
	for (i = 1; calFruit(i) <= n + 10; i++) {
		if (calFruit(i) == n)
			return 1;
	}
	return 0;
}
int main(void) //�������� ����
{
	int i;
	int a, b;

	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		if (!is_Fruit(i))
			printf("%d ", i);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int eachDigits(int n)
{
	// ���⸦ ��������� �ۼ�
	int total = 0;
	if (n == 0)
		return 0;
	else {
		total += n % 10 + eachDigits(n / 10);
		printf("%d ", n % 10);
		return total;
	}
}

int main(void) // �������� ����
{
	int num;
	scanf("%d", &num);
	printf("\n%d\n", eachDigits(num));
}
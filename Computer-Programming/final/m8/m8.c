// ��ü �ڵ� �ۼ�
// �Լ��� �ᵵ ���� �Ƚᵵ ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int three = 3;
	int s[100];
	int i;
	int j = 2;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		if (three > 9) {
			s[i++] = three / 10;
			s[i] = three % 10;
		}
		else {
			s[i] = three;
		}
		three = 3 * j++;
	}
	printf("%d", s[n - 1]);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money;
	int bread, cookie, coke;
	const int b1 = 500, c1 = 700, c2 = 400;

	printf("Enter �ݾ�:");
	scanf("%d", &money);

	for (bread = 1; bread * b1  < money; bread++)
		for (cookie = 1; cookie * c1  < money; cookie++)
			for (coke = 1; coke * c2 < money; coke++)
				if (bread * b1 + cookie * c1 + coke * c2 == money)
					printf("��: %d ��Ű: %d �ݶ�: %d\n", bread, cookie, coke);
}
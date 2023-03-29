#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isin(char a[], int start)
{
	int i;
	int len = 0;
	for (i = 0; i < 2; i++) {
		if (a[start + 1] != a[start] + 1)
			return 0;
		start++;
	}
	return 1;
}

int main(void)
{
	char passwd[20];
	int i, j;

	scanf("%s", passwd);

	// 코드 작성
	for (i = 0; passwd[i] != '\0'; i++) {
		printf("%d", isin(passwd, i));
	}
}
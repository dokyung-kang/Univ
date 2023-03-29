#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isSequence(int* a, int size)
{
	// 코드 작성
	int i;
	int m;

	m = a[0] - a[1];
	for (i = 0; i < size - 1; i++) {
		if (m != (a[i] - a[i + 1]))
			return 0;
	}
	return 1;
}

int main(void)
{
	int n;
	int* a;

	scanf("%d", &n);
	a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d\n", isSequence(a, n));
	free(a);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int n);
int main(void)
{
	int n, idx;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수):");
	scanf("%d", &n);

	for (idx = 0; idx < n; idx++) {
		printf("%d ", fibo(idx));
		if ((idx + 1) % 5 == 0)
			printf("\n");
	}
	printf("\n");
}

int fibo(int n)
{
	int n1 = 1;
	int n2 = 1;
	int n3 = 0;
	int i;

	if (n == 0 || n == 1)
		return 1;
	else {
		for (i = 1; i < n; i++) {
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		return n3;
	}
}
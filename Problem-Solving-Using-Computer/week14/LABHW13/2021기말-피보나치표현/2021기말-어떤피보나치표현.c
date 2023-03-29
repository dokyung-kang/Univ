#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fibo(int n, int* F0, int* F1) {

	if (n == 0) {
		F0[n] = 1;
		F1[n] = 0;
	}
	else if (n == 1) {
		F0[n] = 0;
		F1[n] = 1;
	}
	else {
			if (F0[n - 1] == 0)
				fibo(n - 1, F0, F1);
			if (F1[n - 1] == 0)
				fibo(n - 1, F0, F1);
			F0[n] += F0[n - 1];
			F1[n] += F1[n - 1];
			if (F0[n - 2] == 0)
				fibo(n - 2, F0, F1);
			if (F1[n - 2] == 0)
				fibo(n - 2, F0, F1);
			F0[n] += F0[n - 2];
			F1[n] += F1[n - 2];
	}
	return;
}
int main(void)
{
	int n;
	int* F0;
	int* F1;
	int i;

	scanf("%d", &n);
	F0 = (int*)malloc(sizeof(int) * n);
	F1 = (int*)malloc(sizeof(int) * n);
	for (i = 0; i <= n; i++) {
		F0[i] = 0;
		F1[i] = 0;
	}

	fibo(n, F0, F1);
	printf("%d %d", F1[n], F0[n]);
}
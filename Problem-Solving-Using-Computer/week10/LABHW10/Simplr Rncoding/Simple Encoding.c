#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int max = -1;
	int N;
	int *num;
	int i, j;
	int total = 1;

	printf("N개 숫자 입력:");
	scanf("%d", &N);
	num = (int*)malloc(sizeof(int) * N);
	printf("input:");
	for (i = 0; i < N; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < N; i++) {
		num[i] += 1;
		for (j = 0; j < N; j++) 
			total *= num[j];
		if (total > max)
			max = total;
		num[i] -= 1;
		total = 1;
	}
	printf("%d", max);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pick(int n, int* lotto, int* arr, int lottoSize, int k)
{
	int i, lastIndex, smallest, item;
	int chosen;
	if (k == 0) {
		for (i = 0; i < lottoSize; i++)
			printf("%d ", arr[lotto[i]]);
		printf("\n");
		return;
	}
	lastIndex = lottoSize - k - 1;
	if (lottoSize == k)
		smallest = 0;
	else
		smallest = lotto[lastIndex] + 1;
	for (item = smallest; item < n; item++) {
		lotto[lastIndex + 1] = item;
		pick(n, lotto, arr, lottoSize, k - 1);
	}
}

int main(void)
{
	int n;
	int i;
	int lotto[6];
	int* arr;

	while(1) {
		scanf("%d", &n);

		if (n == 0)
			break;

		arr = (int*)malloc(sizeof(int) * n);

		for (i = 0; i < n; i++)
			scanf("%d", &arr[i]);

		pick(n, lotto, arr, 6, 6);
		printf("\n");
	}
}
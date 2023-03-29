#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int flag = 0;
void pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int N)
{
	int i, lastIndex, smallest;
	int total = 0;

	lastIndex = bucketSize - k - 1;
	for (i = 0; i <= lastIndex; i++) {
		total += bucket[i] * (i + 1);
	}
	if (total == N) {
		for (i = 0; i <= lastIndex; i++) {
			if(bucket[i] == 1)
				printf("+%d", i + 1);
			else
				printf("-%d", i + 1);
		}
		flag = 1;
		return;
	}
	if (k == 0)
		return;

	smallest = 0;
	for (i = 0; i < itemSize; i++) {
		bucket[lastIndex + 1] = items[i];
		if (flag == 1)
			break;
		pick(items, itemSize, bucket, bucketSize, k - 1, N);
	}
	if (flag == 1)
		return;
}
int main(void)
{
	int items[] = { 1, -1 };
	int* bucket;
	int n;
	int N;

	scanf("%d", &N);
	n = N;
	bucket = (int*)malloc(sizeof(int) * n);
	pick(items, 2, bucket, n, n, N);
}
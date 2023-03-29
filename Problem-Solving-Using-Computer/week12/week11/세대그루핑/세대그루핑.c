#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int *items, int itemSize, int *bucket, int bucketSize, int k)
{
	int i, lastIndex, smallest;
	int cnt = 0;
	int lastSelcet = -1;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d ", items[bucket[i]]);
		printf("\n");
		return 1;
	}
	lastIndex = bucketSize - k - 1;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;

	for (i = smallest; i < itemSize; i++) {
		if (lastSelcet == items[i])
			continue;
		else {
			bucket[lastIndex + 1] = i;
			cnt += pick(items, itemSize, bucket, bucketSize, k - 1);
			lastSelcet = items[i];
		}
	}
	return cnt;
}

int main(void)
{
	int N, M;
	int i;
	int* items;
	int* bucket;

	scanf("%d %d", &N, &M);
	items = (int*)malloc(sizeof(int) * N);
	bucket = (int*)malloc(sizeof(int) * M);

	for (i = 0; i < N; i++)
		scanf("%d", &items[i]);

	printf("%d\n", pick(items, N, bucket, M, M));
}
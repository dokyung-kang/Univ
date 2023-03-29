#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pick(int items[], int itemSize, int bucket[], int bucketSize, int k, int N)
{
	int i, j, lastIndex, smallest;
	int cnt = 0;
	int total = 0;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++) {
		total += items[bucket[i]];
	}
	if (N == total)
		return 1;

	if (k == 0)
		return 0;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		cnt += pick(items, itemSize, bucket, bucketSize, k - 1, N);
	}
	return cnt;
}

int main(void)
{
	int n;
	int s[] = { 1, 2 , 3 };
	int* bucket;
	int i;

	scanf("%d", &n);
	bucket = (int*)malloc(sizeof(int) * n);

	printf("%d", pick(s, 3, bucket, n, n, n));
}
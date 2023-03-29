#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int N)
{
	int i, lastIndex, smallest;
	int total = 0;
	int count = 0;

	lastIndex = bucketSize - k - 1;
	for (i = 0; i <= lastIndex; i++) {
		total += bucket[i] * (i + 1);
	}
	if (total == bucketSize)
		count++;
	if(k == 0)
		return count;

	smallest = 0;
	for (i = 0; i < itemSize; i++) {
		bucket[lastIndex + 1] = items[i];
		count += pick(items, itemSize, bucket, bucketSize, k - 1, N);
	}
	return count;
}
int main(void)
{
	int items[] = { 1, -1 };
	int* bucket;
	int n;
	int N;

	scanf("%d %d", &n, &N);

	bucket = (int*)malloc(sizeof(int) * n);
	printf("%d\n", pick(items, 2, bucket, n, n, N));
}
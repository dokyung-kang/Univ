#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int N, int *M)
{
	int i, lastIndex, smallest;
	int total = 0;
	int count = 0;

	lastIndex = bucketSize - k - 1;
	for (i = 0; i <= lastIndex; i++) {
		if (M[i] == 0) {
			total += M[i];
			break;
		}
	}
	for (; i <= lastIndex; i++) 
		total += items[bucket[i]];
	M[i] = total;
	if (total == bucketSize) 
		count++;

	if (k == 0)
		return count;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		count += pick(items, itemSize, bucket, bucketSize, k - 1, N, M);
	}
	return count;
}
int main(void)
{
	int items[] = { 1, 2 };
	int* bucket;
	int* M;
	int N;
	int i;

	scanf("%d", &N);
	M = (int*)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
		M[i] = 0;
	bucket = (int*)malloc(sizeof(int) * N);
	printf("%d\n", pick(items, 2, bucket, N, N, N, M));
}
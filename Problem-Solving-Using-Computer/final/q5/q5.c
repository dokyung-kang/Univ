#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pick(int items[], int itemSize, int bucket[], int bucketSize, int k, int N)
{
	int i, j, lastIndex, smallest;
	int cnt = 0;
	int total = 0;
	int tempM;
	int tM;
	int min = 99;

	lastIndex = bucketSize - k - 1;

	for (i = 0; i <= lastIndex; i++) {
		total += (items[bucket[i]] * items[bucket[i]]);
	}
	if (N == total) {
		tempM = lastIndex + 1;
		return tempM;
	}

	if (k == 0)
		return min;

	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		tM = pick(items, itemSize, bucket, bucketSize, k - 1, N);
		if (min > tM)
			min = tM;
	}
	return min;
}

int main(void)
{
	int n;
	int* s;
	int* bucket;
	int i;

	scanf("%d", &n);
	bucket = (int*)malloc(sizeof(int) * n);
	s = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		s[i] = i + 1;
	printf("%d", pick(s, n, bucket, n, n, n));
}
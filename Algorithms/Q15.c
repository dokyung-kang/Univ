#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

void pick(int n, int* bucket, int *p, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;
	int chosen;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d ", p[bucket[i]]);
		printf("\n");
		return;
	}
	lastIndex = bucketSize - k - 1;
	smallest = 0;
	for (item = smallest; item < n; item++) {
		chosen = 0;
		for (i = smallest; i < lastIndex + 1; i++)
			if (item == bucket[i]) {
				chosen = 1;
				break;
			}
		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			pick(n, bucket, p, bucketSize, k - 1);
		}
	}
}
int main(void)
{
	int n;
	int i;
	int *p;
	int *bucket;

	scanf("%d", &n);

	p = (int*)malloc(sizeof(int) * n);
	bucket = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		p[i] = i + 1;

	pick(n, bucket, p, n, n);

	free(p);
	free(bucket);
}
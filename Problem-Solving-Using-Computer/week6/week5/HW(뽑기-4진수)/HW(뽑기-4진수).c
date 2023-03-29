#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pick(int n, int* bucket, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;
	int chosen;
	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%d ", bucket[i]);
		printf("\n");
		return;
	}
	lastIndex = bucketSize - k - 1;
	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;
	for (item = smallest; item < n; item++) {
		chosen = 0;
		for (i = smallest; i < lastIndex + 1; i++)
			if (item == bucket[i]) {
				chosen = 1;
				break;
			}
		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			pick(n, bucket, bucketSize, k - 1);
		}
	}
}
int main(void)
{
	int n = 5;
	int bucket[3];

	pick(n, bucket, 3, 3);
}
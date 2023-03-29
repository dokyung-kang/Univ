#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pick(int n, int* bucket, char* ball, int bucketSize, int k)
{
	int i, lastIndex, smallest, item;
	int chosen;
	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%c ", ball[bucket[i]]);
		printf("\n");
		return;
	}
	lastIndex = bucketSize - k - 1;
	if (bucketSize == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex] + 1;
	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		pick(n, bucket, ball, bucketSize, k - 1);
	}
}
int main(void)
{
	int n = 7;
	char ball[7] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	int bucket[3];

	pick(n, bucket, ball, 3, 3);
}
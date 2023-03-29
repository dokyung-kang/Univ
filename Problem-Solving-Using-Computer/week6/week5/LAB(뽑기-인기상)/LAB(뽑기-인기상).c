#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
void pick(int n, int bucket[], char man[][8], int bucketSize, int k)
{
	int i, lastIndex, smallest, item;
	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%10s ", man[bucket[i]]);
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
		pick(n, bucket, man, bucketSize, k - 1);
	}
}
int main(void)
{
	int n;
	char man[][8] = { "공유", "김수현", "송중기", "지성", "현빈"};
	int* bucket;

	printf("인기상 몇 명?: ");
	scanf("%d", &n);
	bucket = (int*)(malloc(sizeof(int) * n));
	pick(5, bucket, man, n, n);
}
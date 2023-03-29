#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
void pick(int n, int bucket[], char man[][50], int bucketSize, int k)
{
	int i, lastIndex, smallest, item;
	int chosen;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++)
			printf("%10s ", man[bucket[i]]);
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
			pick(n, bucket, man, bucketSize, k - 1);
		}
	}
}
int main(void)
{
	int n;
	int i;
	char man[][50] = { "공유", "김수현", "송중기", "지성", "현빈" };
	int* bucket;

	printf("인기상 몇 명?: ");
	scanf("%d", &n);
	bucket = (int*)(malloc(sizeof(int) * n));
	for (i = 0; i < n; i++)
		printf("\t 상%d  ", i + 1);
	printf("\n");
	pick(5, bucket, man, n, n);
}
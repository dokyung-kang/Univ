#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int target) {
	int i, lastIndex, smallest;
	int total = 0;
	int found = FALSE;

	if (k == 0) {
		// �ڵ� ����	
		for (i = 0; i < bucketSize; i++)
			total += items[bucket[i]] * items[bucket[i]];
		if (total == target) {
			found = TRUE;
		}
		return found;
	}

	lastIndex = bucketSize - k - 1; // ���� �ֱٿ� ���� ���� ����� ��ġ i
	smallest = 0; // �ߺ�����	

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		found = pick(items, itemSize, bucket, bucketSize, k - 1, target) || found;
		if (found == 1)
			break;
	}
	return found;
}

int main(void)
{
	int* items;
	int* bucket;
	int target;
	int  i, sum = 0;
	int minBucketSize;
	int found = 0;
	
	scanf("%d", &target);

	bucket = (int*)malloc(sizeof(int) * target);
	items = (int*)malloc(sizeof(int) * target);
	for (i = 0; i < target; i++)
		items[i] = i + 1;
	// minBucketSize ���
	// �ڵ�
	minBucketSize = 1;


	for (i = minBucketSize; !found; i++) {
		found = pick(items, target, bucket, i, i, target);
		if (found) {
			printf("%d", i);
			break;
		}
	}
}

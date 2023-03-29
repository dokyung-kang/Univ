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
		for (i = 0; i < bucketSize; i++) {
			total += items[bucket[i]] * (i + 1);
		}
		if (total == target) {
			found = TRUE;
			for (i = 0; i < bucketSize; i++) {
				printf("%d", items[bucket[i]] * (i + 1));
			}
			printf("\n");
			return found;
		}
	}

	lastIndex = bucketSize - k - 1; // ���� �ֱٿ� ���� ���� ����� ��ġ i
	smallest = 0; // �ߺ�����	

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = items[i];
		found = pick(items, itemSize, bucket, bucketSize, k - 1, target) || found;
	}
	return found;
}

int main(void)
{
	int items[] = { 1, -1 };
	int* bucket;
	int target;
	int  i, sum = 0;
	int minBucketSize = 1;
	int found = 0;

	printf("���� �ո� �Է�");
	scanf("%d", &target);

	bucket = (int*)malloc(sizeof(int) * target);

	// minBucketSize ���
	// �ڵ�

	for (i = minBucketSize; !found; i++) {
		found = pick(items, 2, bucket, i, i, target);
		if (found)
			printf("�ּ��� �� ���� %d\n", i);
	}
}

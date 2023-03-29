#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int pick(int* items, int itemSize, int* bucket, int bucketSize, int k, int target, int* M) {
	int i, lastIndex, smallest;
	int total = 0;
	int found = FALSE;

	if (k == 0) {
		// 코드 삽입	
		if (M[bucketSize] == 0) {
			for (i = 0; i < bucketSize; i++)
				total += items[bucket[i]] * items[bucket[i]];
		}
		else
			total = M[bucketSize];
		if (total == target) {
			found = TRUE;
		}

		return found;
	}

	lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 i
	smallest = 0; // 중복순열	

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = i;
		found = pick(items, itemSize, bucket, bucketSize, k - 1, target, M) || found;
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
	int* M;

	scanf("%d", &target);

	bucket = (int*)malloc(sizeof(int) * target);
	items = (int*)malloc(sizeof(int) * target);
	M = (int*)malloc(sizeof(int) * target);
	for (i = 0; i < target; i++) {
		items[i] = i + 1;
		M[i] = 0;
	}
	// minBucketSize 계산
	// 코드
	minBucketSize = 1;


	for (i = minBucketSize; !found; i++) {
		found = pick(items, target / 2, bucket, i, i, target, M);
		if (found) {
			printf("%d", i);
			break;
		}
	}
}

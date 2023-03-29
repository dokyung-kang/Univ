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
		// 코드 삽입	
		for (i = 0; i < bucketSize; i++)
			total += bucket[i] * (i + 1);
		if (total == target) {
			for (i = 0; i < bucketSize; i++) {
				if (bucket[i] == 1)
					printf("+%d", i + 1);
				else
					printf("-%d", i + 1);
			}
			found = TRUE;
		}
		return found;
	}

	lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 i
	smallest = 0; // 중복순열	

	for (i = smallest; i < itemSize; i++) {
		bucket[lastIndex + 1] = items[i];
		found = pick(items, itemSize, bucket, bucketSize, k - 1, target) || found;
		if (found == 1)
			break;
	}
	return found;
}

int main(void)
{
	int items[] = { 1, -1 };
	int* bucket;
	int target;
	int  i, sum = 0;
	int minBucketSize;
	int found = 0;

	printf("목적 합를 입력: ");
	scanf("%d", &target);

	bucket = (int*)malloc(sizeof(int) * target);

	// minBucketSize 계산
	// 코드
	minBucketSize = 1;


	for (i = minBucketSize; !found; i++) {
		found = pick(items, 2, bucket, i, i, target);
		if (found)
			printf("최소의 항 수는 %d\n", i);
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int studentSize, int* bucket, int bucketSize, int k, int* student)
{
	int i, lastIndex, smallest, item;
	int team1 = 0;
	int team2 = 0;
	int diff = 10000;
	int minDiff = 1000;
	int pcnt = 0;
	int tempDiff = 1000;
	int chosen;

	if (k == 0) {
		for (i = 0; i < bucketSize / 2; i++)
			team1 += student[bucket[i]];
		for (i = bucketSize / 2; i < bucketSize; i++)
			team2 += student[bucket[i]];
		if (team1 > team2)
			diff = team1 - team2;
		else
			diff = team2 - team1;
		return diff;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;
	for (item = smallest; item < bucketSize; item++) {
		chosen = 0;
		for(i = smallest; i < lastIndex + 1; i++)
			if (item == bucket[i]) {
				chosen = 1;
				break;
			}
		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			tempDiff = pick(studentSize, bucket, bucketSize, k - 1, student);
			if (minDiff > tempDiff)
				minDiff = tempDiff;
		}
	}
	return minDiff;
}
int main(void) // 이 main함수를 그대로 사용해도 좋고, 변경하여도 좋다
{
	int n;
	int* bucket;
	int* student;

	//printf("개수 입력");
	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);
	student = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &student[i]);
	printf("%d", pick(n, bucket, n, n, student));

}
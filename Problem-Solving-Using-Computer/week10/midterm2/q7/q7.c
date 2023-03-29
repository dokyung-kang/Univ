#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int* items, int itemsSize, int* bucket, int bucketSize, int k, int* num1, int* num2)
{
	int i, lastIndex, smallest;
	int m;
	int cnt = 0;
	int flag = 1;
	int max = 1000;
	int pcnt = 0;
	int maxI = 1000;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
			if (items[bucket[i]] != 0)
				pcnt++;
			num2[i] = num1[i] + items[bucket[i]];
		}
		m = num2[0] - num2[1];
		for (i = 0; i < bucketSize - 1; i++) {
			if (m != num2[i] - num2[i + 1]) {
				flag = 0;
				break;
			}
		}
		if (flag == 0)
			return 1000;
		else
			return pcnt;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;
	for (i = 0; i < itemsSize; i++) {
		bucket[lastIndex + 1] = i;
		maxI = pick(items, itemsSize, bucket, bucketSize, k - 1, num1, num2);
		if (max > maxI)
			max = maxI;
	}
	return max;
}
int main(void) // 이 main함수를 그대로 사용해도 좋고, 변경하여도 좋다
{
	int items[3] = { -1, 0, 1 };
	int n;
	int* bucket;
	int* num1;
	int* num2;
	int c;

	//printf("개수 입력");
	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);
	num1 = (int*)malloc(sizeof(int) * n);
	num2 = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num1[i]);
	if ((c = pick(items, 3, bucket, n, n, num1, num2)) == 1000)
		printf("-1");
	else
		printf("%d", c);

}
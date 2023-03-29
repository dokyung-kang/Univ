#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int pick(int* items, int itemsSize, int* bucket, int bucketSize, int k, int* num1, int* num2) 
{
	int i, lastIndex, smallest;
	int m;
	int cnt = 0;
	int flag = 1;

	if (k == 0) {
		for (i = 0; i < bucketSize; i++) {
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
			return 0;
		else
			return 1;
	}

	lastIndex = bucketSize - k - 1;
	smallest = 0;
	for (i = 0; i < itemsSize; i++) {
		bucket[lastIndex + 1] = i;
		cnt += pick(items, itemsSize, bucket, bucketSize, k - 1, num1, num2);
	}
	return cnt;
}
int main(void) // �� main�Լ��� �״�� ����ص� ����, �����Ͽ��� ����
{
	int items[3] = { -1, 0, 1 };
	int n;
	int* bucket;
	int* num1;
	int* num2;

	//printf("���� �Է�");
	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);
	num1 = (int*)malloc(sizeof(int) * n);
	num2 = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &num1[i]);
	printf("%d\n", pick(items, 3, bucket, n, n, num1, num2));
}
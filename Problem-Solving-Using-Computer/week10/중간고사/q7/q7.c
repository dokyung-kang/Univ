#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int isSequence(int* n, int size)
{
	if (size <= 2)
		return 1;
	int diff = n[1] - n[0];
	for (int i = 1; i < size - 1; i++)
		if (n[i + 1] - n[i] != diff)
			return 0;
	return 1;
}

void printSequence(int* n, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", n[i]);
	printf("\n");
}

int calOperation(int *num1, int *num2)
{
	// -1�̳� +1 ������ ����� Ƚ���� ���ؼ� ��ȯ�Ѵ�.
	// �ڵ� �ۼ�
	int i;
	int cnt = 0;
	for (i = 0; num1[i] != '\0'; i++)
		if (num1[i] != num2[i])
			cnt++;
	return cnt;
}

int pick(int* items, int n, int* bucket, int bucketSize, int k, int* num1, int* num2) {
	int i, lastIndex, smallest, item;
	int result;
	int opNum, min;
	min = opNum = 1000;
	if (k == 0) {
		// num1�� ����(-1, 0, +1)�� ������ ���� num2�� �ִ´�
		// 
		for (i = 0; i < bucketSize; i++) {
			num2[i] = num1[i] + items[bucket[i]];
		}
		// �ڵ� ����

		if (isSequence(num2, bucketSize)) {
			printSequence(num2, bucketSize);
			opNum = calOperation(num1, num2);
			//rintf("%d\n", opNum); // �׽�Ʈ ����Ʈ
		}
		return opNum;
	}

	lastIndex = bucketSize - k - 1; // ���� �ֱٿ� ���� ���� ����� ��ġ index

	smallest = 0;
	//�ߺ�����
	for (item = smallest; item < n; item++) {
		bucket[lastIndex + 1] = item;
		result = pick(items, n, bucket, bucketSize, k - 1, num1, num2);
		if (result < min)
			min = result;
	}
	return min;
}
int main(void)
{
	int items[3] = { -1, 0, 1 };
	int n, count;
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
	if ((count = pick(items, 3, bucket, n, n, num1, num2)) <= n)
		printf("%d\n", count);
	else
		printf("-1");
}

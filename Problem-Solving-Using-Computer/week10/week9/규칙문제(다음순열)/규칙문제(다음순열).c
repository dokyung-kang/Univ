#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int flag = 1;
void pick(int *a, int n, int* bucket, int bucketSize, int k, int *items)
{
	int i, j, lastIndex, smallest, item;
	int chosen;
	if (k == 0) {
		if (flag == 2)
			for (i = 0; i < bucketSize; i++)
				printf("%d ", a[bucket[i]]);
		flag = 1;
		for (i = 0; i < bucketSize; i++)
			if (a[bucket[i]] != items[i]) {
				flag = 0;
				break;
			}
		if (flag == 1)
			flag = 2;
		return;
	}
	lastIndex = bucketSize - k - 1;
	smallest = 0;
	for (item = smallest; item < n; item++) {
		chosen = 0;
		for (j = 0; j < lastIndex + 1; j++)
			if (bucket[j] == item)
				chosen = 1;
		if (chosen == 0) {
			bucket[lastIndex + 1] = item;
			pick(a, n, bucket, bucketSize, k - 1, items);
		}
	}
}

void descend(int items[], int d[], int n)
{
	int i;
	int j;
	int idx;
	int max; 
	int temp;

	for (i = 0; i < n; i++)
		d[i] = items[i];

	for (i = 0; i < n - 1; i++) {
		idx = i;
		max = d[i];
		for (j = i + 1; j < n; j++) {
			if (max < d[j]) {
				max = d[j];
				idx = j;
			}
		}
		temp = d[i];
		d[i] = d[idx];
		d[idx] = temp;
	}
}

void ascend(int items[], int a[], int n)
{
	int i;
	int j;
	int idx;
	int max;
	int temp;

	for (i = 0; i < n; i++)
		a[i] = items[i];

	for (i = 0; i < n - 1; i++) {
		idx = i;
		max = a[i];
		for (j = i + 1; j < n; j++) {
			if (max > a[j]) {
				max = a[j];
				idx = j;
			}
		}
		temp = a[i];
		a[i] = a[idx];
		a[idx] = temp;
	}
}
int isDsame(int items[], int d[], int n) {
	int i;

	for (i = 0; i < n; i++) 
		if (items[i] != d[i])
			return 0;
	return 1;
}

int main(void)
{
	int n;
	int i;
	int *bucket;
	int *items;
	int *d;
	int *a;

	scanf("%d", &n);

	bucket = (int*)malloc(sizeof(int) * n);
	items = (int*)malloc(sizeof(int) * n);
	d = (int*)malloc(sizeof(int) * n);
	a = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &items[i]);
	descend(items, d, n);
	ascend(items, a, n);
	if (isDsame(items, d, n))
		printf("-1");
	else
		pick(a, n, bucket, n, n, items);
}
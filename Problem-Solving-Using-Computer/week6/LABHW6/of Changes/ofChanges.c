#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int cnt = 0;
void pick(int* items, int itemsize, int* bucket, int bucketSize, int k, int money) {
    int i, lastIndex, smallest;
    int sum = 0;

    if (k == 0) {
        // �� �κ��� �� �����ؼ� ä���־����
        for (i = 0; i < bucketSize; i++) {
            sum += items[bucket[i]];
        }
        if (sum == money)
            cnt++;
        return;
    }

    // ���ϴ� �������� ����
    lastIndex = bucketSize - k - 1; // ���� �ֱٿ� ���� ���� ����� ��ġ
    if (k == bucketSize)
        smallest = 0;
    else
        smallest = bucket[lastIndex]; // �ߺ� ����

    for (i = smallest; i < itemsize; i++) {
        bucket[lastIndex + 1] = i;
        pick(items, itemsize, bucket, bucketSize, k - 1, money);
    }
    return;
}

int main(void)
{
    int items[] = { 10, 50, 100, 500, 0};
    int* bucket;
    int money, n;

    scanf("%d", &money);
    n = money / 10;
    bucket = (int*)malloc(sizeof(int) * n);

    pick(items, 5, bucket, n, n, money);
    printf("%d", cnt);
}
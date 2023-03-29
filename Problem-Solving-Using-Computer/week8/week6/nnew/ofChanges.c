#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int pick(int* items, int itemsize, int* bucket, int bucketSize, int k, int money) {
    int i, lastIndex, smallest;
    int sum = 0;
    int cnt = 0;
    // 이하는 변경하지 말고
    lastIndex = bucketSize - k - 1;
    for (i = 0; i < lastIndex + 1; i++) {
        sum += items[bucket[i]];
    }
    if (sum == money)
        return 1;
    else if (sum > money)
        return 0;

    if (k == bucketSize)
        smallest = 0;
    else
        smallest = bucket[lastIndex]; // 중복 조합

    for (i = smallest; i < itemsize; i++) {
        bucket[lastIndex + 1] = i;
        cnt += pick(items, itemsize, bucket, bucketSize, k - 1, money);
    }
    return cnt;
}

int main(void)
{
    int items[] = { 500, 100, 50, 10 };
    int* bucket;
    int money, n;

    scanf("%d", &money);
    n = money / 10;
    bucket = (int*)malloc(sizeof(int) * n);

    printf("%d", pick(items, 4, bucket, n, n, money));
}
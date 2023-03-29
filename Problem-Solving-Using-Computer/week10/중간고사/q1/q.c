#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int make(int n, int k, int num[])
{
    int i = 0;
    int cnt = 0;

    while (n != 0) {
        num[i] = n % k;
        n /= k;
        cnt++;
        i++;
    }
    return cnt;
}

void printN(int num[], int size)
{
    int i;

    for (i = size - 1; i >= 0; i--)
        printf("%d ", num[i]);
}

int main(void)
{
    int num[1000];
    int n;
    int k;
    int i = 0;
    int cnt;

    scanf("%d %d", &n, &k);

    cnt = make(n, k, num);
    printN(num, cnt);
}
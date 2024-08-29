#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000001
int arr[MAX] = { 0 };
int main(void)
{
    int m;
    int n;
    int i, j;

    scanf("%d %d", &m, &n);

    for (i = 2; i < MAX; i++)
        arr[i] = 1;     // 2 이상 모두 참(1)이라고 설정

    for (i = 2; i <= n; i++)
        for (j = i * 2; j <= n; j += i)
            arr[j] = 0;     // 소수가 아니면 거짓(0)

    for (i = m; i <= n; i++)
        if (arr[i])
            printf("%d\n", i);
}
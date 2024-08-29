#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000001
int arr[MAX] = { 0 };
int main(void)
{
    int n;
    int i, j;
    int found = 0;  // 합 찾았는지 여부

    for (i = 2; i < MAX; i++)
        arr[i] = 1;     // 2 이상 모두 참(1)이라고 설정

    for (i = 2; i < MAX; i++)
        for (j = i * 2; j < MAX; j += i)
            arr[j] = 0;     // 소수가 아니면 거짓(0)

    while (1) {
        found = 0;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 2; i <= n / 2; i++) {
            if (arr[i] == 1) {
                if (arr[n - i] == 1) {
                    printf("%d = %d + %d\n", n, i, n - i);
                    found = 1;
                    break;
                }
            }
        }
        if (found == 0) {
            printf("Goldbach's conjecture is wrong.");
        }
    }
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fib(int n, int* F) { // F[1]...F[n]까지 사용
    if (n == 1 || n == 2) return 1;
    if (F[n - 1] == 0) // memo에서 fn-1 확인
        F[n - 1] = fib(n - 1, F); //memo에 없으면 호출

    if (F[n - 2] == 0) // memo에서 fn-2 확인
        F[n - 2] = fib(n - 2, F); //memo에 없으면 호출

    return F[n - 1] + F[n - 2];
}

int main(void)
{
    int n, i;
    int* F; //memo

    clock_t start, stop;
    double duration;
    start = clock();	// 측정 시작
    //printf("몇 개의 피보나치 수열:");
    printf("몇 번째까지의 피보나치 수열:");
    scanf("%d", &n); //fn

    //memo 초기화
    F = (int*)malloc(sizeof(int) * (n + 1));
    for (i = 1; i <= n; i++)
        F[i] = 0; // F[1]부터 유의미한 값을 넣음
    for (i = 1; i <= n; i++)
        printf("%d ", fib(i, F)); //메모와 함께 재귀함수 호출 

    //printf("%d\n", fib(n, F)); //메모와 함께 재귀함수 호출 
    printf("\n");
    free(F);

    stop = clock();	// 측정 종료
    duration = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("수행시간은 %f초입니다.\n", duration);
}

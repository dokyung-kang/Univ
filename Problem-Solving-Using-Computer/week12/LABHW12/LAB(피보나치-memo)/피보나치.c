#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 아래의 fib를 memo인 F를 다룰 수있도록 바꾼다.
// 매개변수는 int n, int *F
int fib(int n) {
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(void)
{
	int n, i;
	//memo에 쓸 포인터 변수 F를 선언

	clock_t start, stop;
	double duration;
	start = clock();	// 측정 시작

	printf("몇 번째까지의 피보나치 수열:");
	scanf("%d", &n); //fn

	// memo인 F를 n+1인 배열로 동적으로 할당)

	// memo인 F를 0으로 초기화

	// fib호출시 memo인 F랑 함께 호출
	for (i = 1; i <= n; i++)
		printf("%d ", fib(i));
	printf("\n");

	stop = clock();	// 측정 종료
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf("수행시간은 %f초입니다.\n", duration);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void initArray(int arr[], int size) { //변경하지 말라
	int i, k = 0;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}

int isPalinSeries(int* p, int size)
{
	int* p2 = p + (size - 1);
	// 이하 작성요
	// 배열적 표현을 쓰지말고 p와 p2를 변화시키면서 작성하라
	int i;
	for (i = 0; i < size; i++) {
		if (*p2 != *p)
			return 0;
		p2--;
		p++;
	}
	return 1;

}

int main(void) // 변경하지 말라
{
	int arr1[5];
	int i, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		initArray(arr1, 5);
		printf("%d\n", isPalinSeries(arr1, 5));
	}
}
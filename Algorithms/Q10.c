#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int temp = 0;
	int total = 0;		
	int found = 0;	// 가짜 난쟁이 찾았는지 여부
	int arr[10] = { 0 };

	// 인덱스가 1인 것부터 순서대로 입력받은 난쟁이 키 받음
	for (i = 1; i <= 9; i++) {	
		scanf("%d", &arr[i]);
		total += arr[i];	// 난쟁이 9명의 키 모두 더함
	}

	// 난쟁이 9명 키 모두 더함 값 - (가짜 난쟁이 2명 키 더한 값) == 100
	for (i = 1; i <= 8; i++) {		
		for (j = 2; j <= 9; j++) {
			if ((total - (arr[i] + arr[j])) == 100) {
				arr[i] = 101;	// 일곱 난쟁이가 아니면 값 101로 바꿈 (추후 배열 오름차순 정렬 시에 맨 뒤로 보내짐)
				arr[j] = 101;	// 일곱 난쟁이가 아니면 값 101로 바꿈 (추후 배열 오름차순 정렬 시에 맨 뒤로 보내짐)
				found = 1;
				break;
			}
		}
		if (found == 1)
			break;
	}

	// 배열 오름차순 정렬
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// 일곱 난쟁이만 출력
	for (i = 1; i <= 7; i++) {
		printf("%d\n", arr[i]);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void initArray(int arr[], int size) { //변경하지 말라
	int i, k = 0;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}

void printArray(int arr[], int size) { //변경하지 말라
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

void turnArray(int array1[], int array2[], int size)
{
	// 여기를 작성
	int i;
	int j = 0;
	array2[j++] = array1[4];
	for (i = 0; i < size; i++) {
		array2[j++] = array1[i];
	}
}

int main(void) // 변경하지 말라
{
	int arr1[5];
	int arr2[5];
	int i;
	int n;

	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printArray(arr2, 5);
}
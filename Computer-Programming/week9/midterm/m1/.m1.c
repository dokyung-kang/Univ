#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void initArray(int arr[], int size) { //�������� ����
	int i, k = 0;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}

void printArray(int arr[], int size) { //�������� ����
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

void turnArray(int array1[], int array2[], int size)
{
	// ���⸦ �ۼ�
	int i;
	int j = 0;
	array2[j++] = array1[4];
	for (i = 0; i < size; i++) {
		array2[j++] = array1[i];
	}
}

int main(void) // �������� ����
{
	int arr1[5];
	int arr2[5];
	int i;
	int n;

	initArray(arr1, 5);
	turnArray(arr1, arr2, 5);
	printArray(arr2, 5);
}
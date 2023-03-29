#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumList(int arr[], int size);
int maxList(int arr[], int size);
int indexSearch(int arr[], int size, int key);
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("���� %d\n", sumList(list, 10));
	printf("���� ū ���� %d\n", maxList(list, 10));

	printf("Ž���� ����? ");
	scanf("%d", &value);


	printf("�� %d�� ���� ù��° ���� ", value);
	if ((keyIndex = indexSearch(list, 10, value)) == -1)
		printf("�����ϴ�.");
	else
		printf("%d��°�� �ֽ��ϴ�.", keyIndex);

	return 0;
}
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}
int maxList(int arr[], int size)
{
	int i, max = 0;
	for (i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
int indexSearch(int arr[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == key)
			return i + 1;
	return -1;
}
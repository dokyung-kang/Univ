#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int searchKey(int n[], int size, int key)
{
	int i;

	for (i = 0; i < size; i++)
		if (n[i] == key)
			return i;
	return -1;
}
int main(void)
{
	int num[5];
	int key;
	int i;
	int keyIndex;

	printf("Enter 5���� ����: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	printf("Enter a key: ");
	scanf("%d", &key);

	if ((keyIndex = searchKey(num, 5, key)) == -1)
		printf("����.\n");
	else
		printf("%d��°�� �ִ�.\n", keyIndex + 1);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isSame(int n1[], int n2[]);
int input(int n[], int size);
int main(void)
{
	int n1[5];
	int n2[5];
	int i;

	printf("Enter ù��° �迭: ");
	input(n1, 5);
	printf("Enter �ι�° �迭: ");
	input(n2, 5);

	if(isSame(n1, n2))
		printf("�� ���� �迭�� ����");
	else
		printf("�� ���� �迭�� �ٸ���");
}

int input(int n[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		scanf("%d", &n[i]);
}

int isSame(int n1[], int n2[])
{
	int i;

	for (i = 0; i < 5; i++) {
		if (n1[i] != n2[i])
			return 0;
	}
	return 1;
}
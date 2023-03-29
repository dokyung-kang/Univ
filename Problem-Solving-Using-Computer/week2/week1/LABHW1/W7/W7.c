#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void echo(int n[], int size);
void reverse(int n[], int size);
int main(void)
{
	int num[5];
	int i;

	printf("Enter your name: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	echo(num, 5);
	reverse(num, 5);
}

void echo(int n[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", n[i]);
	printf("\n");
}

void reverse(int n[], int size)
{
	int i;
	printf("Reverse: ");
	for (i = 0; i < size; i++)
		printf("%d ", n[4 - i]);
	printf("\n");
}
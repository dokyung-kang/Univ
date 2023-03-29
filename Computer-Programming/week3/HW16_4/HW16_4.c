#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initTable(int t[][5], int size);
int totalTable(int t[][5], int size);
void printTable(int t[][5], int size);
int main(void)
{
	int table[3][5];
	int i, j;
	int total = 0;

	srand(time(NULL));

	initTable(table, 3);
	printf("발생된 난수의 평균은 %d입니다\n", totalTable(table, 3) / 15);

	printTable(table, 3);

	printf("----각 열의 합----\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			total += table[j][i];
		printf("%5d", total);
		total = 0;
	}
	return 0;
}
void initTable(int t[][5], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
			t[i][j] = rand() % 100;
}
int totalTable(int t[][5], int size)
{
	int i, j;
	int total = 0;
	for (i = 0; i < size; i++)
		for (j = 0; j < 5; j++)
			total += t[i][j];
	return total;
}
void printTable(int t[][5], int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5d", t[i][j]);
		printf("\n");
	}
}
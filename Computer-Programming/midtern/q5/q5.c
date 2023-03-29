#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define X_VALUE 5 // 2���� �迭�� ���� �� 
#define Y_VALUE 5 // 2���� �迭�� ���� �� 

void readGridInfo(char grid[][Y_VALUE + 1]) // �������� ����
{
	int i;
	// grid �Է� 
	//printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}

void countGrid(char grid[][Y_VALUE + 1], int digitsAround[][Y_VALUE])
{
	// �̺κ��� �ۼ� i - 1 j|  i j + 1 | i + 1 j | i j - 1
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < Y_VALUE + 1; j++) {
			if (j > 0)
				if(grid[i][j - 1] > '0')
					digitsAround[i][j] += grid[i][j - 1] - 48;
			if (i > 0)
				if (grid[i - 1][j] > '0')
					digitsAround[i][j] += grid[i - 1][j] - 48;
			if (i < 4)
				if (grid[i + 1][j] > '0')
					digitsAround[i][j] += grid[i + 1][j] - 48;
			if (j < 4)
				if (grid[i][j + 1] > '0')
					digitsAround[i][j] += grid[i][j + 1] - 48;
		}
	}
}

void display_digitsAround(int digitsAround[][Y_VALUE]) // �������� ����. ���ȿ����� �Լ��� ���� ��������
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			printf("%d ", digitsAround[i][j]); // �̺κ��� ���� ��������
		printf("\n");
	}
}

int main(void) // �������� ����
{
	char grid[X_VALUE][Y_VALUE + 1]; // ���ڿ� ������ \0 �� ������ 5*6 �迭

	int digitsAround[X_VALUE][Y_VALUE] = { 0 };

	readGridInfo(grid);
	countGrid(grid, digitsAround);
	display_digitsAround(digitsAround);
}
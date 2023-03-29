#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define X_VALUE 5 // 2차원 배열의 행의 수 
#define Y_VALUE 5 // 2차원 배열의 열의 수 

void readGridInfo(char grid[][Y_VALUE + 1]) // 변경하지 말라
{
	int i;
	// grid 입력 
	//printf("Input Grid\n");
	for (i = 0; i < X_VALUE; i++)
		scanf("%s", grid[i]);
}

void countGrid(char grid[][Y_VALUE + 1], int digitsAround[][Y_VALUE])
{
	// 이부분을 작성 i - 1 j|  i j + 1 | i + 1 j | i j - 1
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

void display_digitsAround(int digitsAround[][Y_VALUE]) // 변경하지 말라. 교안에서의 함수를 조금 변형했음
{
	int i, j;
	for (i = 0; i < X_VALUE; i++) {
		for (j = 0; j < Y_VALUE; j++)
			printf("%d ", digitsAround[i][j]); // 이부분을 조금 변형했음
		printf("\n");
	}
}

int main(void) // 변경하지 말라
{
	char grid[X_VALUE][Y_VALUE + 1]; // 문자열 마지막 \0 값 때문에 5*6 배열

	int digitsAround[X_VALUE][Y_VALUE] = { 0 };

	readGridInfo(grid);
	countGrid(grid, digitsAround);
	display_digitsAround(digitsAround);
}
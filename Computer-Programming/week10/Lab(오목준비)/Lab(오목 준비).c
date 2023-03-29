#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 3 // 추후에 10으로 바꾸어서 진행한다
void display(char b[][BOARD_SIZE])
{
	char ch;
	int i, j;
	printf("     ");
	for (i = 0; i < BOARD_SIZE; i++)
		printf("%2d", i);
	printf("\n ---------------------\n");
	for (i = 0; i < BOARD_SIZE; i++) {
		printf("%3d |", i);
		for (j = 0; j < BOARD_SIZE; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}
void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turnX = 'X';
	char turnO = 'O';
	int r, c;
	int i, j;
	int count;
	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';
	count = 1;
	display(board);
	do
	{
		if (count % 2 == 1) {
			printf("Player %c(행 :", turnX);
			scanf("%d %d", &r, &c);
			if (board[r][c] != ' ')
				continue;
			else
				board[r][c] = turnX;
		}
		else {
			printf("Player %c(행 열):", turnO);
			scanf("%d %d", &r, &c);
			if (board[r][c] != ' ')
				continue;
			else
				board[r][c] = turnO;
		}
		display(board);
		count++;
	} while (count <= BOARD_SIZE * BOARD_SIZE);
}
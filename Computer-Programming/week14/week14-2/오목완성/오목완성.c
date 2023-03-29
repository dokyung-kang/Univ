#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BOARD_SIZE 6 // 추후에 10으로 바꾸어서 진행한다
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

int winCheck(char b[][BOARD_SIZE], int r, int c)
{
	int i, j;
	int cnt;
	char turn;
	turn = b[r][c];

	//가로
	cnt = 1;
	i = c - 1, j = c + 1;
	//왼
	while ((i >= 0) && (b[r][i] == turn)) {
		cnt++;
		i--;
	}
	//오
	while ((j < BOARD_SIZE) && (b[r][j] == turn)) {
		cnt++;
		j++;
	}
	if (cnt == 5)
		return 1;

	//세로
	cnt = 1;
	i = r - 1, j = r + 1;
	//위
	while ((i >= 0) && (b[i][c] == turn)) {
		cnt++;
		i--;
	}
	//아래
	while ((j < BOARD_SIZE) && (b[j][c] == turn)) {
		cnt++;
		j++;
	}
	if (cnt == 5)
		return 1;

	//대각선
	cnt = 1;
	//왼위
	i = r - 1, j = c - 1;
	while ((i >= 0) && (b[i][j] == turn)) {
		cnt++;
		i--;
		j--;
	}
	//오아래
	i = r + 1, j = c + 1;
	while ((j < BOARD_SIZE) && (b[i][j] == turn)) {
		cnt++;
		i++;
		j++;
	}
	if (cnt == 5)
		return 1;

	//역대각선
	cnt = 1;
	//왼아래
	i = r - 1, j = c + 1;
	while ((i >= 0) && (b[i][j] == turn)) {
		cnt++;
		i--;
		j++;
	}
	//오위
	i = r + 1, j = c - 1;
	while ((j < BOARD_SIZE) && (b[i][j] == turn)) {
		cnt++;
		i++;
		j--;
	}
	if (cnt == 5)
		return 1;

	return 0;
}

void main()
{
	char board[BOARD_SIZE][BOARD_SIZE];
	char turn = 'X';
	int r, c;
	int i, j;
	int count;
	int lose;
	int win;

	for (i = 0; i < BOARD_SIZE; i++)
		for (j = 0; j < BOARD_SIZE; j++)
			board[i][j] = ' ';

	count = 1;
	display(board);
	do
	{
		printf("Player %c(행 열): ", turn);
		scanf("%d %d", &r, &c);

		if (board[r][c] != ' ')
			continue;

		board[r][c] = turn;
		display(board);

		if (win = winCheck(board, r, c))
			printf("Player %c wins!\n", turn);

		turn = (turn == 'X' ? 'O' : 'X');
		count++;
	} while (!win && count <= BOARD_SIZE * BOARD_SIZE);

	if (!win && count == BOARD_SIZE * BOARD_SIZE)
		printf("Nobody wins!\n");
}
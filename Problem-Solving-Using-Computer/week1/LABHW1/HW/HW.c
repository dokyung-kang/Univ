#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display(char b[][3]);
int winP(char b[][3], int r, int c);
int main(void)
{
	char ch[3][3];
	char turn = 'X';
	int r, c;
	int i, j;
	int cnt;
	int w;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			ch[i][j] = ' ';

	cnt = 1;
	display(ch);
	do {
		printf("Player %c(За ї­):", turn);
		scanf("%d %d", &r, &c);
		if (ch[r][c] != ' ')
			continue;
		else
			ch[r][c] = turn;
		display(ch);
	
		if (w = winP(ch, r, c))
			printf("Player %c wins!\n", turn);

		if (turn == 'X')
			turn = 'O';
		else
			turn = 'X';
		cnt++;
	} while (!w && (cnt <= 9));
	if (!w)
		printf("Nobody wins!\n");
}

void display(char b[][3])
{
	char c;
	int i, j;

	printf("   ");
	for (i = 0; i < 3; i++)
		printf("%2d", i);
	printf("\n    ------\n");
	for (i = 0; i < 3; i++) {
		printf("%d |", i);
		for (j = 0; j < 3; j++)
			printf(" %c", b[i][j]);
		printf("\n");
	}
}

int winP(char b[][3], int r, int c)
{
	int i, j;
	char turn;
	int cnt;

	turn = b[r][c];

	cnt = 1;
	i = c - 1;
	j = c + 1;
	while ((i >= 0) && (b[r][i] == turn)) {
		i--;
		cnt++;
	}
	while ((j < 3) && (b[r][j] == turn)) {
		j++;
		cnt++;
	}
	if (cnt == 3)
		return 1;

	cnt = 1;
	i = r - 1;
	j = r + 1;
	while ((i >= 0) && (b[i][c] == turn)) {
		i--;
		cnt++;
	}
	while ((j < 3) && (b[j][c] == turn)) {
		j++;
		cnt++;
	}
	if (cnt == 3)
		return 1;

	cnt = 1;
	i = r - 1;
	j = c - 1;
	while ((i >= 0) && (b[i][j] == turn)) {
		i--;
		j--;
		cnt++;
	}
	i = r + 1;
	j = c + 1;
	while ((j < 3) && (b[i][j] == turn)) {
		i++;
		j++;
		cnt++;
	}
	if (cnt == 3)
		return 1;

	cnt = 1;
	i = r - 1;
	j = c + 1;
	while ((i >= 0) && (b[i][j] == turn)) {
		i--;
		j++;
		cnt++;
	}
	i = r + 1;
	j = c - 1;
	while ((j < 3) && (b[i][j] == turn)) {
		i++;
		j--;
		cnt++;
	}
	if (cnt == 3)
		return 1;

	return 0;
}
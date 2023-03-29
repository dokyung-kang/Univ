#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display(char b[][3]);
int main(void)
{
	char ch[3][3];
	char turnX = 'X';
	char turnO = 'O';
	int r, c;
	int i, j;
	int cnt;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			ch[i][j] = ' ';
	cnt = 1;
	display(ch);
	do {
		if (cnt % 2 == 1) {
			printf("Player %c(행 열):", turnX);
			scanf("%d %d", &r, &c);
			if (ch[r][c] != ' ')
				continue;
			else
				ch[r][c] = turnX;
		}
		else {
			printf("Player %c(행 열):", turnO);
			scanf("%d %d", &r, &c);
			if (ch[r][c] != ' ')
				continue;
			else
				ch[r][c] = turnO;
		}
		display(ch);
		cnt++;
	} while (cnt <= 9);
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
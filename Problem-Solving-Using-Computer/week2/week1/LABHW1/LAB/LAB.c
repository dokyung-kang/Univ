#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display(char b[][3]);
int main(void)
{
	char ch[3][3];
	char turn = 'X';
	int r, c;
	int i, j;
	int cnt;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			ch[i][j] = ' ';
	cnt = 1;
	display(ch);
	do {
		printf("Player %c(За ї­):", turn);
		scanf("%d %d", &r, &c);		
		
		ch[r][c] = turn;
		display(ch);

		turn = (turn == 'X' ? 'O' : 'X');
		cnt++;
	} while (cnt <= 9);
}

void display(char b[][3])
{
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
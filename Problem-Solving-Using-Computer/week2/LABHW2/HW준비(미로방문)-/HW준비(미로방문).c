#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 10
#define HEIGHT 10
//int count = 0;
#include <stdio.h>
int screen[WIDTH][HEIGHT] = {
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1, 0, 0,-1,-1,-1, 0,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1,-1,-1,-1,-1,-1,
-1,-1,-1, 0, 0, 0, 0, 0,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0,-1,-1,-1,-1,
-1,-1,-1, 0,-1, 0, 0, 0,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
};

void flood_fill(int x, int y)
{
	static int count = 0;
	int num;
	if (screen[x][y] == 0)
	{
		screen[x][y] = ++count;

		flood_fill(x, y + 1); //오른쪽
		flood_fill(x + 1, y); //아래
		flood_fill(x, y - 1); //왼쪽
		flood_fill(x - 1, y); //위
	}
}

void display(int s[][HEIGHT], int width)
{
	int i, j;
	for (i = 0; i < HEIGHT; i++) {
		for (j = 0; j < width; j++)
			printf("%3d", s[i][j]);
		printf("\n");
	}
	printf("\n");
}

int main(void)
{
	display(screen, WIDTH);
	flood_fill(4, 3);
	display(screen, WIDTH);
}
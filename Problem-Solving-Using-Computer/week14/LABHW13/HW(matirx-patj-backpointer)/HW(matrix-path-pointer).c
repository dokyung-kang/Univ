#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define LE 1
#define UP 2
int matrixPath_memo(int** m, int r, int c, int i, int j, int** M, int** BP)
{
	if (i == 0 && j == 0)
		return m[0][0];
	else if (i == 0) {

		BP[i][j] = 1;
		if (M[0][j - 1] == 0)
			M[0][j - 1] = matrixPath_memo(m, r, c, 0, j - 1, M, BP);
		return M[0][j - 1] + m[i][j];
	}
	else if (j == 0) {
		BP[i][j] = 2;
		if (M[i - 1][0] == 0)
			M[i - 1][0] = matrixPath_memo(m, r, c, i - 1, 0, M, BP);
		return M[i - 1][0] + m[i][j];
	}
	else { // 여기에서는 어떻게 BP[i][j] 설정?
		if (M[i - 1][j] == 0)
			M[i - 1][j] = matrixPath_memo(m, r, c, i - 1, j, M, BP);
		if (M[i][j - 1] == 0)
			M[i][j - 1] = matrixPath_memo(m, r, c, i, j - 1, M, BP);
		if (M[i - 1][j] > M[i][j - 1])
			BP[i][j] = 1;
		else
			BP[i][j] = 2;
		return (M[i - 1][j] < M[i][j - 1] ? M[i - 1][j] : M[i][j - 1]) + m[i][j];
	}
}

void print_path(int i, int j, int** BP)
{
	if (i == 0 && j == 0)
		return;
	else if (i == 0) {
		print_path(i, j - 1, BP);
		printf("<%d,%d> ", i, j - 1);
	}
	else if (j == 0) {
		print_path(i - 1, j, BP);
		printf("<%d,%d> ", i - 1, j);
	}
	else {
		if (BP[i - 1][j] == 2)
			print_path(i - 1, j, BP);
		else
			print_path(i, j - 1, BP);
		printf("<%d,%d> ", i, j);
	}
}

int main(void)
{
	int** m, ** M, ** BP; // M은 메모
	int i, j, r, c;
	r = c = 4; // 4x4 matrix
	m = (int**)malloc(sizeof(int*) * r);
	M = (int**)malloc(sizeof(int*) * r);
	BP = (int**)malloc(sizeof(int*) * r);
	for (i = 0; i < r; i++) {
		m[i] = (int*)malloc(sizeof(int) * c);
		M[i] = (int*)malloc(sizeof(int) * c);
		BP[i] = (int*)malloc(sizeof(int) * c);
	}


	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++) {
			scanf("%d", &m[i][j]);
			M[i][j] = 0; //메모 초기화
			BP[i][j] = 0;
		}
	printf("%d\n", matrixPath_memo(m, r, c, 3, 3, M, BP));

	// 메모 M 출력
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%3d ", M[i][j]);
		printf("\n");
	}

	// backpointer BP 출력
	printf("\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%3d ", BP[i][j]);
		printf("\n");
	}

	printf("\n");
	print_path(3, 3, BP);
	for (i = 0; i < r; i++) {
		free(m[i]);
		free(M[i]);
		free(BP[i]);
	}
	free(m);
	free(M);
	free(BP);
}


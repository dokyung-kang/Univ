#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void init(char arr[][100], int n, int m)
{
	int i, j;

	for (i = 0; i < m; i++) {
		scanf("%s", arr[i]);
	}
}

int find(char arr[][100], int n, int m, int startP)
{
	int i, j;
	n = startP;

	for (i = 0; i < m; i++) {
		if (arr[i][n - 1] == '1') {
			n = n - 1;
		}
		else if (arr[i][n] == '1') {
			n = n + 1;
		}
	}
	
	return n;
}

int main(void)
{
	char ladder[100][100];
	int n;
	int m;
	int startP;

	scanf("%d %d", &n, &m);
	scanf("%d", &startP);
	init(ladder, n, m);
	printf("%d", find(ladder, n, m, startP));
}
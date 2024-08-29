#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int *m;
int min = 99999;
int comp(int n, int **arr)
{
	int s = 0;
	int e = 0;
	int i;
	int j;
	int result;

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if ((m[i] == 1) && (m[j] == 1)) {
				s += (arr[i][j] + arr[j][i]);
			}
			if ((m[i] == 0) && (m[j] == 0)) {
				e += (arr[i][j] + arr[j][i]);
			}
		}
	}

	result = s - e;

	if (result < 0)
		result *= -1;

	return result;
}

void search(int n, int **arr, int d, int s)
{
	int tmpMin;
	int i;

	tmpMin = comp(n, arr);

	if (d == n / 2) {
		if (min > tmpMin)
			min = tmpMin;
		return;
	}

	for (i = s; i < n; i++) {
		if (m[i] == 0) {
			m[i] = 1;
			search(n, arr, d + 1, i + 1);
			m[i] = 0;
		}
	}
}

int main(void)
{
	int n;
	int i;
	int j;
	int** arr;

	scanf("%d", &n);

	arr = (int**)malloc(sizeof(int*) * n);
	m = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * n);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	search(n, arr, 0, 0);

	printf("%d", min);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cnt = 0;
void search(int n, int s, int* arr, int d, int total)
{
	if (d >= n) {
		return;
	}
	if (total + arr[d] == s) {
		cnt++;
	}

	search(n, s, arr, d + 1, total + arr[d]);
	search(n, s, arr, d + 1, total);
}

int main(void)
{
	int n;
	int s;
	int i;
	int* arr;

	scanf("%d %d", &n, &s);

	arr = (int*)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	search(n, s, arr, 0, 0);
	
	printf("%d", cnt);
}
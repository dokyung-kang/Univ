#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int cnt = 0;
int arr[100][100] = { 0 };
void pick(int n, int *m, int* b, int bsize, int k)
{
	int i, j, lastIndex, smallest, item;
	int have = 0;
	int *c;
	c = (int*)malloc(sizeof(int) * bsize);

	if (k == 0) {
		for (i = 0; i <= cnt; i++) {
			have = 0;
			for (j = 0; j < bsize; j++) {
				//printf("%d ", m[b[j]]);
				if (arr[i][j] == m[b[j]]) 
					have++;
			}
			if (have == 3)
				break;
		}
		//printf("\n");
		if (have < 3) {
			cnt++;
			for (i = 0; i < bsize; i++) 
				arr[cnt][i] = m[b[i]];
		}
		//printf("%d\n", cnt);
		return;
	}

	lastIndex = bsize - k - 1;

	if (bsize == k)
		smallest = 0;
	else smallest = b[lastIndex] + 1;

	for (item = smallest; item < n; item++) {
		b[lastIndex + 1] = item;
		pick(n, m, b, bsize, k - 1);;
	}
}

int main(void)
{
	int n, m;
	int *member;
	int *bucket;
	int i;

	scanf("%d %d", &n, &m);
	member = (int*)malloc(sizeof(int) * n);
	bucket = (int*)malloc(sizeof(int) * m);
	
	for (i = 0; i < n; i++)
		scanf("%d", &member[i]);

	pick(n, member, bucket, m, m);
	printf("%d", cnt);
}
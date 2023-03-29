#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse(int n1[], int n2[], int size)
{
	int i;
	
	for (i = 0; i < size; i++)
		n2[i] = n1[size - 1 - i];
}

int make(int num[], int k, int n)
{
	int i = 0;
	int cnt = 0;
	while (n != 0) {
		num[i] = n % k;
		n /= k;
		cnt++;
		i++;
	}
	return cnt;
}

int isP(int n1[], int n2[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		if (n1[i] != n2[i])
			return 0;
	return 1;
}
int main(void)
{
	int num[1000];
	int rNum[1000];
	int n;
	int k;
	int i = 0;
	int j = 0;
	int cnt;

	scanf("%d %d", &n, &k);

	cnt = make(num, k, n);
	reverse(num, rNum, cnt);
	printf("%d", isP(num, rNum, cnt));
	
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000001
long long result[MAX] = { 0 };
int main(void)
{
	int i;
	int j;
	int k;
	int T;
	int n;

	scanf("%d", &T);

	for (i = 1; i < MAX; i++) { 
		for (j = 1; i * j < MAX; j++) {
			result[i * j] += i;  
		}
		result[i] += result[i - 1]; 
	}

	for (k = 0; k < T; k++) {
		scanf("%d", &n);

		printf("%lld\n", result[n]);
	}
}
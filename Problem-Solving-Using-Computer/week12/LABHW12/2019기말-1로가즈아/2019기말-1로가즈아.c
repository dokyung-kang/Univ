#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long cal(int n, long long *M)
{
	int cnt = 0;
	int cnt1;
	int cnt2;
	int cnt3;

	if (n == 1)
		return cnt;
	else if (n % 2 == 0 && n % 3 == 0) {
		if(M[n / 3] == 0)
			M[n / 3] = cal(n / 3, M);
		if(M[n / 2] == 0)
			M[n / 2] = cal(n / 2, M);
		if(M[n - 1] == 0)
			M[n - 1] = cal(n - 1, M);
			if (M[n / 3] <= M[n / 2] && M[n / 3] <= M[n - 1])
				M[n] =  M[n / 3];
			else if (M[n / 2] <= M[n / 3] && M[n / 2] <= M[n - 1])
				M[n] =  M[n / 2];
			else
				M[n] =  M[n - 1];
		return M[n] + 1;
	}
	else if (n % 3 == 0) {
		if(M[n / 3] == 0)
			M[n / 3] = cal(n / 3, M);
		if(M[n - 1] == 0)
			M[n - 1] = cal(n - 1, M);
		if (M[n / 3] < M[n - 1])
			M[n] = M[n / 3];
		else
			M[n] = M[n - 1];
		return M[n] + 1;
	}
	else if (n % 2 == 0) {
		if(M[n / 2] == 0)
			M[n / 2] = cal(n / 2, M);
		if(M[n - 1] == 0)
			M[n - 1] = cal(n - 1, M);
		if (M[n / 2] < M[n - 1])
			M[n] = M[n / 2];
		else
			M[n] = M[n - 1]; 
		return M[n] + 1;
	}
	else {
		if(M[n - 1] == 0)
			M[n - 1] = cal(n - 1, M);
		M[n] = M[n - 1];
		return M[n] + 1;
	}
}

int main(void)
{
	int n;
	long long *M;
	int i;

	scanf("%d", &n);
	M = (long long*)malloc(sizeof(long long) * n);
	for (i = 0; i < n; i++)
		M[i] = 0;
	printf("%lld", cal(n, M));
}
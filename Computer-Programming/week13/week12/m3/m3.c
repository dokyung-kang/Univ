#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int solution(int n) 
{
	int answer = 0;
	while (n != 0) {
		answer = answer * 10 + n % 10;
		n /= 10;
	}
	return answer;
}

int main(void)
{
	int n;
	int cnt = 0;

	scanf("%d", &n);
	while (n != solution(n)) {
		n += solution(n);
		if (n < 0)
			break;
		cnt++;
	}
	if (n < 0)
		printf("Overflow");
	else
		printf("%d %d", cnt, n);
}
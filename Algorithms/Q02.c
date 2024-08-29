#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int cnt;	
	int resultN = 1;	

	while (scanf("%d", &n) != EOF) {	// 최대 몇개의 입력이 들어오는지 처리 
		cnt = 1;
		resultN = 1;
		
		while (1) {
			if (resultN % n == 0) {		
				printf("%d", cnt);
				printf("\n");
				break;
			}
			else {		
				resultN = (resultN % n) * 10 + 1;
				cnt++;
			}
		}
	}
}
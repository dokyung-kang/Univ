#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n[6];
	char c;
	int i;

	srand(time(NULL));

	do {
		printf("*** 로또 번호 생성기 ***\n");
		printf("생성 번호: ");
		
		for (i = 0; i < 6; i++) {
			n[i] = rand() % 46;
			printf("%d ", n[i]);
		}
		printf("\n");

		printf("다시 생성하겠습니까? (y/n):");
		scanf("%c", &c);
		while (getchar() != '\n');
	} while (c == 'y');
}
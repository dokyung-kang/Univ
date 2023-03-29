#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void makeN(int n[], int size)
{
	srand(time(NULL));
	int i;
	for (i = 0; i < size; i++) {
		n[i] = rand() % 45 + 1;
		printf("%d ", n[i]);
	}
}
int main(void)
{
	int n[6];
	char c;

	do {
		printf("*** 로또 번호 생성기 ***\n");
		printf("생성 번호: ");
		
		makeN(n, 6);
		printf("\n");

		printf("다시 생성하겠습니까? (y/n):");
		scanf("%c", &c);
		while (getchar() != '\n');
	} while (c == 'y');
}
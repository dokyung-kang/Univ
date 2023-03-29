#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyStars(int num);
int main(void)
{
	printManyStars(3);
	printManyStars(4);
	printManyStars(5);
}
void printManyStars(int num)
{
	int i;
	for (i = 1; i <= num; i++)
		printf("*");
	printf("\n");
	return;
}
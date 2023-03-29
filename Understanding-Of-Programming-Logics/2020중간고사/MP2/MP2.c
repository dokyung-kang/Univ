#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, score, student, total = 0;
	double average = 0;

	scanf("%d", &student);

	while (i < student)
	{
		scanf("%d", &score);
		i++;

		total += score;
		average = (double)total / student;
	}
	printf("%d\n", total);
	printf("%.1f\n", average);
}
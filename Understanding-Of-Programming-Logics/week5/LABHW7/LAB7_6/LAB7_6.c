#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, score, i, total;

	printf("Enter a student number: ");
	scanf("%d", &n);

	i = 0;
	total = 0;
	while (i < n)
	{
	printf("Enter a score: ");
	scanf("%d", &score);
	total += score;
	i++;
	}
	printf("The total is %d", total);

	return 0;
}



/*´ä
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int  studentNum;
	int score;
	int i;
	int sum;

	printf("Enter a student number: ");
	scanf("%d", &studentNum);

	i = 1;
	while (i <= studentNum)
	{
	printf("Enter a score: ");
	scanf("%d", &score);

	sum += score;

	i++;
	}
	printf("The total is %d", sum);

	return 0;
}
*/
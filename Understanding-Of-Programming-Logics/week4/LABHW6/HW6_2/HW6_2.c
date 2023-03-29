#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
		printf("Congratulation");
	else if (grade == 'B')
		printf("Okay, try harder");
	else if (grade == 'C')
	{
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("Try harder, you need to get %d next time", score + 10);
	}
	else if (grade == 'D' || grade == 'F')
		printf("Sorry, you should take this course again");
	else
		printf("Wrong grade");

	return 0;
}
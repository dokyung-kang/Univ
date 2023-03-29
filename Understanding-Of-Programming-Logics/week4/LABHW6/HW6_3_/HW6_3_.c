#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char gender;
	int height, weight;

	printf("Enter your gender(M/F): ");
	scanf("%c", &gender);

	if (gender == 'M')
		printf("Sorry, this fitness center is for women only.");
	else if (gender == 'F')
	{
		printf("Enter your hight: ");
		scanf("%d", &height);
		printf("Enter your weight: ");
		scanf("%d", &weight);
		if (height <= weight + 110)
			printf("You NEED a diet. TRY HARDER.");
		else
			printf("You do NOT need a diet. Keep excercising");
	}

	return 0;
}
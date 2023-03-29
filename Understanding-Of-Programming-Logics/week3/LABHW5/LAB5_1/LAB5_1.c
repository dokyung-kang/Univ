#include <stdio.h>
int main(void)
{
	char gender;
	int age;
	double height;

	printf("Enter your gender: ");
	scanf_s("%c", &gender, 1);
	printf("Enter your age: ");
	scanf_s("%d", &age);
	printf("Enter your height: ");
	scanf_s("%lf", &height);

	printf("성별\t\t나이\t\t키\t\t \n");
	printf("%c\t\t%d\t\t%f\t\t \n", gender, age, height);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
};
int main(void)
{
	struct student aStudent;
	struct student* sp = &aStudent;

	printf("Enter student name: ");
	scanf("%s", (*sp).name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &(*sp).midterm, &(*sp).final);

	printf("이름\t중간\t학기말\n");
	printf("%s\t%d\t%d", (*sp).name, (*sp).midterm, (*sp).final);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

/*
typedef struct {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
} Student;
*/
int main(void)
{
	struct student s[3];
	struct student* sp = s;
	int i;
	int mid = 0;
	int fin = 0;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", sp->name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->midterm, &sp->final);
		sp++;
	}
	printf("\n");

	sp = s;
	for (i = 0; i < 3; i++) {
		sp->average = (sp->midterm + sp->final) / 2;
		sp++;
	}

	sp = s;
	printf("이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
		sp++;
	}
	printf("\n");

	sp = s;
	printf("이름\t학점\n");
	for (i = 0; i < 3; i++) {
		if (sp->average >= 80)
			sp->grade = 'A';
		else if (sp->average >= 50)
			sp->grade = 'B';
		else
			sp->grade = 'F';
		printf("%s  %c\n", sp->name, sp->grade);
		sp++;
	}
	printf("\n");

	sp = s;
	for (i = 0; i < 3; i++) {
		mid += sp->midterm;
		fin += sp->final;
		sp++;
	}
	printf("중간고사의 평균 = %d\n", mid / 3);
	printf("학기말고사의 평균 = %d\n", fin / 3);
}
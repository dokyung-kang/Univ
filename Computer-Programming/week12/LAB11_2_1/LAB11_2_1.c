#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};
typedef struct student{
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

void printStudent(Student* p)
{
	printf("%s\t", (*p).name);
	printf("%d\t%d\t%d\n", (*p).midterm, (*p).final, (*p).average);
}

void readStudentScore(Student *p) {

	printf("Enter student name: ");
	scanf("%s", (*p).name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &(*p).midterm, &(*p).final);

}

void calculateStudentAverage(Student* p)
{
	(*p).average = ((*p).midterm + (*p).final) / 2;
}

int main(void)
{
	Student s[40];
	Student* sp = s;
	int num, i;

	printf("Enter a number of student:");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		readStudentScore(sp);
		sp++;
	}
	sp = s;
	for (i = 0; i < num; i++) {
		calculateStudentAverage(sp);
		sp++;
	}
	printf("\n이름\t중간\t학기말\t평균\n");
	sp = s;
	for (i = 0; i < num; i++) {
		printStudent(sp);
		sp++;
	}
}
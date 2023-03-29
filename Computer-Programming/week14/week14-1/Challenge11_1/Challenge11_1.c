#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	char name[20];
	int midterm;
	int final;
	int average;
};

typedef struct {
	char name[20];
	int midterm;
	int final;
	int average;
} Student;

struct cClass {
	int num;
	Student s[40];
};

typedef struct {
	int num;
	Student s[40];
} CClass;


void printStudent(Student* sp)
{
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}

void readClass(CClass* cp)
{
	int i;
	for (i = 0; i < cp->num; i++) {
		printf("Enter student name: ");
		scanf("%s", cp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &cp->s[i].midterm, &cp->s[i].final);
	}
}

void calculateClassAverage(CClass* cp)
{
	int i;
	for (i = 0; i < cp->num; i++)
		cp->s[i].average = (cp->s[i].midterm + cp->s[i].final) / 2;
}

void printClass(CClass* cp)
{
	int i;
	for (i = 0; i < cp->num; i++) {
		printf("%s\t", cp->s[i].name);
		printf("%d\t%d\t%d\n", cp->s[i].midterm, cp->s[i].final, cp->s[i].average);
	}
}

void calculateAll(CClass* cp, Student* sp)
{
	int i;
	int m = 0, f = 0, a = 0;
	for (i = 0; i < cp->num; i++) {
		m += cp->s[i].midterm;
		f += cp->s[i].final;
		a += cp->s[i].average;
	}
	sp->midterm = (m / cp->num);
	sp->final = (f / cp->num);
	sp->average = (a / cp->num);
}
int main(void)
{
	CClass cp;

	Student all = { "All", 0, 0, 0 };

	printf("Enter a number of student: ");
	scanf("%d", &cp.num);

	readClass(&cp);

	calculateClassAverage(&cp);

	printf("\n이름\t중간\t학기말\t평균\n");
	printClass(&cp);

	calculateAll(&cp, &all);
	printf("--------------------------------\n");
	printStudent(&all);
}
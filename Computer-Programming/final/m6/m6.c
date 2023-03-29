#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct student {
	char no[5];     //�߰� : �й� 
	char name[20];
	int midterm;
	int final;
	char grade; // ����
} Student;

typedef struct cClass {
	int num;
	Student s[40];
} CClass;

void readClass(CClass* cp) // �ڵ� �ۼ�
{
	int i;
	for (i = 0; i < cp->num; i++) {
		scanf("%s", cp->s[i].no);
		scanf("%s", cp->s[i].name);
		scanf("%d", &cp->s[i].midterm);
		scanf("%d", &cp->s[i].final);
	}
}

void printStudent(Student* sp) // �������� ����
{
	printf("%s %s %d %d %c\n", sp->no, sp->name, sp->midterm, sp->final, sp->grade);  //�й� �߰�
}

void printClass(CClass* cp) // �������� ����
{
	int i;
	for (i = 0; i < cp->num; i++)
		printStudent(&cp->s[i]);
}

void calculateClassGrade(CClass* cp) // �ڵ� �ۼ�
{
	int i;
	int avg;
	for (i = 0; i < cp->num; i++) {
		avg = (cp->s[i].midterm + cp->s[i].final) / 2;
		if (avg >= 50)
			cp->s[i].grade = 'A';
		else
			cp->s[i].grade = 'F';
	}
}

int AStudents(CClass* cp) // �ڵ� �ۼ�
{
	int i;
	int cnt = 0;
	for (i = 0; i < cp->num; i++) {
		if (cp->s[i].grade == 'A') {
			printf("%s %s %d %d A\n", cp->s[i].no, cp->s[i].name, cp->s[i].midterm, cp->s[i].final);
			cnt++;
		}
	}
	return cnt;
}

int main(void) // �������� ����
{
	CClass c2;

	// printf("Enter a number of student:");
	scanf("%d", &c2.num);
	readClass(&c2);

	calculateClassGrade(&c2);
	printf("%d\n", AStudents(&c2)); // �߰�
}
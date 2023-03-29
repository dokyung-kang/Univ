struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int mid = 0;
	int fin = 0;
	struct student s[3];
	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);
	}
	printf("\n");
	printf("이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++) {
		s[i].average = (s[i].midterm + s[i].final) / 2;
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
	}
	printf("\n");
	printf("이름\t학점\n");
	for (i = 0; i < 3; i++) {
		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (s[i].average >= 50)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
		printf("%s  %c\n", s[i].name, s[i].grade);
	}
	for (i = 0; i < 3; i++) {
		mid += s[i].midterm;
		fin += s[i].final;
	}
	mid /= 3;
	fin /= 3;
	printf("\n");
	printf("중간고사의 평균 = %d\n", mid);
	printf("학기말고사의 평균 = %d", fin);

}
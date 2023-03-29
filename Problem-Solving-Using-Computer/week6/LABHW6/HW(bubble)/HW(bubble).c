#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Student
{
	int id; //학번. 1번 부터 부여 ..
	int korean, english, math;
};

void bubbleSortDescendingByKorean(struct Student* s, int size)
{
	int i, j;
	struct Student temp;

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1 - i; j++) {
			if (s[j].korean < s[j + 1].korean) {
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

void bubbleSortAscendingById(struct Student* s, int size)
{
	int i, j;
	struct Student temp;

	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1 - i; j++) {
			if (s[j].id > s[j + 1].id) {
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}

void printArray(struct Student* s, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("학번 : %d\t영어 : %d\t수학 : %d\t국어 : %d\n", s[i].id, s[i].english, s[i].math, s[i].korean);
}

int main()
{
	int n;
	int i;
	struct Student* s;
	srand(time(NULL));

	printf("학생 수를 입력하세요: ");
	scanf("%d", &n);
	//n 입력 받음

	//Student 구조체 배열을 동적으로 할당
	s = (struct Student*)malloc(sizeof(struct Student) * n);
	for (i = 0; i < n; i++) {
		// 학번 부여
		s[i].id = i + 1;
		// random으로 성적 저장
		s[i].korean = rand() % 101;
		s[i].english = rand() % 101;
		s[i].math = rand() % 101;
	}

	printArray(s, n);
	printf("\n");

	bubbleSortDescendingByKorean(s, n);

	printArray(s, n);
	printf("\n");

	bubbleSortAscendingById(s, n);
	printArray(s, n);
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Student
{
	int id; //학번. 1번 부터 부여 ..
	int korean, english, math;
};

void sortArray(struct Student *s, int size)
{
	int i, j;
	struct Student max;
	int max_idx;
	struct Student temp;

	for (i = 0; i < size - 1; i++) {
		max = s[i];
		max_idx = i;
		for (j = i + 1; j < size; j++) {
			if (max.korean < s[j].korean) {
				max = s[j];
				max_idx = j;
			}
		}
				temp = s[i];
				s[i] = s[max_idx];
				s[max_idx] = temp;
	}
}

void printArray(struct Student *s, int size)
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

	printf("Enter a number: ");
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

	sortArray(s, n);
	printArray(s, n);
};
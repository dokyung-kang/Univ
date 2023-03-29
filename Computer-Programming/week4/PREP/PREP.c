#define _CRT_SECURE_NO_WARNINGS
#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0
#include <stdio.h>
int hasElement(int set[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT;
	return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
	int i;
	printf("( ");
	for (i = 0; i < size; i++) {
		printf("%d", set[i]);
		if (i + 1 != size)
			printf(", ");
	}
	printf(" )\n");
}

int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i;
	if (size1 != size2)
		return DO_NOT_HAVE_ELEMENT;
	else {
		for (i = 0; i < size1; i++) {
			hasElement(set2, size2, set1[i]);
			if (!hasElement(set2, size2, set1[i]))
				return DO_NOT_HAVE_ELEMENT;
		}
		return HAVE_ELEMENT;
	}
}

int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element)) {
		printf("It is redundant. Please retry.\n");
		return size;
	}
	else {
		set[size] = element;
		return size + 1;
	}
}

int main(void)
{
	int setA[MAX_SET_SIZE] = { 1, 2, 3 };
	int setB[MAX_SET_SIZE] = { 3, 2, 1, 4 };
	int num;
	int sizeA = 3, sizeB = 4;

	printf("A:"); printSet(setA, sizeA);
	printf("B:"); printSet(setB, sizeB);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집합 A와 B는 같다\n");
	else
		printf("집합 A와 B는 다르다\n");

	printf("A에 3을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 3);
	printf("집합 A:"); printSet(setA, sizeA);

	printf("A에 4을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 4);
	printf("집합 A:"); printSet(setA, sizeA);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집합 A와 B는 같다\n");
	else
		printf("집합 A와 B는 다르다\n");
}
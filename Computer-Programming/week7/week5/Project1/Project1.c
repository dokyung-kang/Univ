#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]);
int setIntersection(int set1[], int size1, int set2[], int size2, int setResult[]);
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]);
void printSet(int set[], int size);
int addOneElement(int set[], int size, int element);

int main(int argc, char* argv[])
{
	int i;

	int setA[MAX_SET_SIZE];
	int setB[MAX_SET_SIZE];
	int setC[MAX_SET_SIZE*2];

	int sizeA;
	int sizeB;
	int sizeC;

	printf("Enter the number for Set A:");
	scanf("%d", &sizeA);
	i = 0;
	while (i < sizeA) {
		printf("Enter the number of Set S (%d/%d):", i + 1, sizeA);
		scanf(" %d", &setA[i]);
		i = addOneElement(setA, i, setA[i]);
	}

	printf("Enter the size of Set B:");
	scanf("%d", &sizeB);
	i = 0;
	while (i < sizeB) {
		printf("Enter the number for Set B(%d/%d):", i + 1, sizeB);
		scanf("%d", &setB[i]);
		i = addOneElement(setB, i, setB[i]);
	}

	printf("Set A: ");
	printSet(setA, sizeA);
	printf("Set B: ");
	printSet(setB, sizeB);

	sizeC = setUnion(setA, sizeA, setB, sizeB, setC);
	printf("Union of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setIntersection(setA, sizeA, setB, sizeB, setC);
	printf("Intersection of setA and setB: ");
	printSet(setC, sizeC);

	sizeC = setComplements(setA, sizeA, setB, sizeB, setC);
	printf("Set-theoretic difference of setA and setB (setA - setB): ");
	printSet(setC, sizeC);

	return 0;
}

int hasElement(int set[], int size, int element)
{
	int i = 0;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT;
	return DO_NOT_HAVE_ELEMENT;
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

void printSet(int set[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d", set[i]);
		if (i + 1 != size)
			printf(", ");
	}
	printf(" }\n");
}

int setUnion(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i;
	int size;
	if (size1 >= size2) {
		size = size1;
		for (i = 0; i < size; i++)
			setResult[i] = set1[i];
		for (i = 0; i < size2; i++) {
			if (!hasElement(set1, size1, set2[i]))
				setResult[size++] = set2[i];
		}
	}
	else {
		size = size2;
		for (i = 0; i < size; i++)
			setResult[i] = set2[i];
		for (i = 0; i < size1; i++) {
			if (!hasElement(set2, size2, set1[i]))
				setResult[size++] = set1[i];
		}
	}
	return size;
}

int setIntersection(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i;
	int size = 0;
	for (i = 0; i < size1; i++) {
		if (hasElement(set2, size2, set1[i])) 
			setResult[size++];
	}
	return size;
}

int setComplements(int set1[], int size1, int set2[], int size2, int setResult[])
{
	int i;
	int size = 0;
	if (size1 >= size2) {
		for (i = 0; i < size1; i++) 
			if (!hasElement(set2, size2, set1[i]))
				setResult[size++] = set1[i];
	}
	else {
		for (i = 0; i < size2; i++)
			if (!hasElement(set1, size1, set2[i]))
				setResult[size++] = set2[i];
	}
	return size;
}
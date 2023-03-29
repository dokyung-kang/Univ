#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int partition(int A[], int p, int r)
{
	int i = 0, j = 0;
	int k;
	int temp;

	for (k = 0; k <= r; k++) {
		if (A[k] > A[r])
			j++;
		else {
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j++;
		}
	}

	return i - 1;
}

void printList(int A[], int s, int e)
{
	int i;
	for (i = s; i <= e; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main(void)
{
	int list[] = { 0, 20, 55, 66, 10, 40, 88, 77, 30, 49 };
	int list2[] = { 0, 20, 10, 40, 30, 49, 88, 77, 55, 66 };
	int loc;

	//test 1
	printList(list, 0, 9);
	loc = partition(list, 0, 9);
	printList(list, 0, 9);
	printf("%d의 위치는 %d\n", 49, loc);

	//test 2
	//printList(list2, 6, 9);
	//loc = partition(list2, 6, 9);
	//printList(list2, 6, 9);
	//printf("%d의 위치는 %d\n", 66, loc);

	//test 3
	//printList(list2, 0, 4);
	//loc = partition(list2, 0, 4);
	//printList(list2, 0, 4);
	//printf("%d의 위치는 %d\n", 30, loc);
}
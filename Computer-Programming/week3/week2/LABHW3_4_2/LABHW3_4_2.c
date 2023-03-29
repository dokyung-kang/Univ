#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
void printSet(int arr[], int size);
int is_in(int arr[], int size, int n);
int main(void)
{
	int i = 0, newN;
	int s[5];
	
	while (i < 5) {
		printf("집합에 추가할 원소: ");
		scanf("%d", &newN);

		if (is_in(s, i, newN) == 1)
			printf("%d는 이미 집합에 있음\n", newN);
		else {
			s[i] = newN;
			printSet(s, i);
			i++;
		}
	}
}
int is_in(int arr[], int size, int n)
{
	int i;

	for (i = 0; i < size; i++) 
			if (arr[i] == n)
				return 1;
	return 0;
}
void printSet(int arr[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i <= size; i++){
		printf("%d", arr[i]);
		if (i != size)
			printf(", ");
	}
	printf(" }");
	printf("\n");
}
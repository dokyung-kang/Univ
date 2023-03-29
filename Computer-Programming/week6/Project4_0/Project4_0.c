#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_OF_MEMBERS 5
void print_links(int data[][NUM_OF_MEMBERS]);
void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS]);
int main(void)
{
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { {0,1,0,0,0}, {1, 0, 1, 0, 0}, {0, 1, 0, 0, 1}, 
		{0, 0, 0, 0, 1}, {0, 0, 1, 1, 0} };
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };

	printf("===========================================================================\n");
	printf("Friends matrix\n");
	printf("===========================================================================\n");
	print_links(link_data);

	matrix_multiplication(link_data, link_result);

	printf("===========================================================================\n");
	printf("Friends if friends matrix\n");
	printf("===========================================================================\n");

	print_links(link_result);

}

void print_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++) {
		for (j = 0; j < NUM_OF_MEMBERS; j++) {
			if (j == i)
				data[i][j] = 1;
			printf("%3d ", data[i][j]);
		}
		printf("\n");
	}
}

void matrix_multiplication(int data[][NUM_OF_MEMBERS], int result[][NUM_OF_MEMBERS])
{
	int i, j, k;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			result[i][j] = data[i][j];
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++) {
			for (k = 0; k < NUM_OF_MEMBERS; k++)
				result[i][j] += data[i][k] * data[k][j];
			if (result[i][j] > 0)
				result[i][j] = 1;
		}
}
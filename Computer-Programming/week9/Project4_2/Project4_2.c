#define _CRT_SECURE_NO_WARNINGS
#define NUM_OF_MEMBERS 70
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++) {
		for (j = 0; j < NUM_OF_MEMBERS; j++) {
			printf("%d", data[i][j]);
		}
		printf("\n");
	}
}

void matrix_multiplication(int data1[][NUM_OF_MEMBERS], int data2[][NUM_OF_MEMBERS], int data3[][NUM_OF_MEMBERS])
{
	int i, j, k;
	for (i = 0; i < NUM_OF_MEMBERS; i++) {
		for (j = 0; j < NUM_OF_MEMBERS; j++) {
			for (k = 0; k < NUM_OF_MEMBERS; k++) {
				data3[i][j] += data1[i][k] * data2[k][j];
				if (data3[i][j] > 0)
					data3[i][j] = 1;
			}
		}
	}
}

void matrix_copy(int dest[][NUM_OF_MEMBERS], int src[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		for (j = 0; j < NUM_OF_MEMBERS; j++)
			dest[i][j] = src[i][j];
}

int check_links(int data[][NUM_OF_MEMBERS])
{
	int i, j;
	for (i = 0; i < NUM_OF_MEMBERS; i++) 
		for (j = 0; j < NUM_OF_MEMBERS; j++) 
			if (data[i][j] == 0)
				return 0;
	return 1;
}

int main(void)
{
	int link_data[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	int link_data2[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };
	int link_result[NUM_OF_MEMBERS][NUM_OF_MEMBERS] = { 0 };

	int i = 0, j = 0;
	int num_of_steps = 0;
	int ALL_ONES = 0;

	srand(time(NULL));
	//srand(100);
	for (i = 0; i < NUM_OF_MEMBERS; i++)
		link_data[i][i] = 1;

	for (i = 0; i < NUM_OF_MEMBERS; i++) {
		j = 0;
		while (j < 2) {
			int new_link = rand() % NUM_OF_MEMBERS;
			if (new_link != i) {
				link_data[i][new_link] = 1;
				link_data[new_link][i] = 1;
				j++;
			}
		}
	}

	//printf("\nÃÊ±â 1ÃÌ »óÅÂ:\n");
	//print_links(link_data);
	matrix_copy(link_data2, link_data);
	while (1) {
		num_of_steps++;

		matrix_multiplication(link_data, link_data2, link_result);

		printf("\n%d steps:\n", num_of_steps);
		//print_links(link_result);

		ALL_ONES = check_links(link_result);
		if (ALL_ONES)
			break;

		matrix_copy(link_data2, link_result);
	}
	printf("It takes %d steps: \n", num_of_steps);
}
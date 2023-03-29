#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_in(int item, int arr[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		if (arr[i] == item)
			return 1;
	return 0;
}

int cardIntersection(int can[], int cSize, int card[])
{
	int i;
	int k = 0;
	int temp[16];

	for (i = 0; i < cSize; i++)
		if (is_in(can[i], card, 8))
			temp[k++] = can[i];
	for (i = 0; i < k; i++)
		can[i] = temp[i];
	return k;
}

int cardDiff(int can[], int cSize, int card[])
{
	int i;
	int k = 0;
	int temp[16];

	for (i = 0; i < cSize; i++)
		if (!is_in(can[i], card, 8))
			temp[k++] = can[i];
	for (i = 0; i < k; i++)
		can[i] = temp[i];
	return k;
}

int main(void)
{
	int card[4][8] = {
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 9, 10, 11, 12},
		{1, 2, 5, 6, 9, 10, 13, 14},
		{1, 3, 5, 7, 9, 11, 13, 15}
	};
	int candidate[15];
	int candidateSize;
	int i;
	char answer[5];

	for (i = 0; i < 15; i++)
		candidate[i] = i + 1;
	candidateSize = 15;
	scanf("%s", answer);

	for (i = 0; i < 4; i++) {
		if (answer[i] == 'Y')
			candidateSize = cardIntersection(candidate, candidateSize, card[i]);
		else
			candidateSize = cardDiff(candidate, candidateSize, card[i]);
	}

	for (i = 0; i < candidateSize; i++)
		printf("%d\n", candidate[i]);
}
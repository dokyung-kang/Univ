#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);
int main(void)
{
	int seatChoice = 0;
	int seats[SIZE] = { 0 };
	printf("******�¼� ���� �ý���******\n");
	printSeats(seats, SIZE);
	while (1)
	{
		seatChoice += askReservation();
		processReservation(seats, SIZE, seatChoice);
		while (getchar() != '\n');

		if (seats[9] == 1)
			break;
	}
}
int askReservation()
{
	int choice;

	printf("\n�¼��� �����Ͻðڽ��ϱ�?(���) ");
	scanf("%d", &choice);

	return choice;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i;
	for (i = 0; i < seatNumber; i++)
		s[i] = 1;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");

}
void printSeats(int s[], int size)
{
	int i;
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}
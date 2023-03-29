#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#include <stdio.h>
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);
int index = 0;
int main(void)
{
	int seatChoice;
	int seats[SIZE] = { 0 };
	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);
	while (1)
	{
		seatChoice = askReservation();
		processReservation(seats, SIZE, seatChoice);
		while (getchar() != '\n');

		if (seats[9] == 1)
			break;
	}
}
int askReservation()
{
	int choice;

	printf("\n좌석을 예약하시겠습니까?(몇명) ");
	scanf("%d", &choice);

	return choice;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i;
	for (i = 0; i < seatNumber; i++)
		s[index++] = 1;

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
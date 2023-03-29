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
	while (seatChoice < 10) {
		seatChoice += askReservation();
		processReservation(seats, SIZE, seatChoice);
		printSeats(seats, SIZE);
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
	int over = 0;
	for (i = 0; i < seatNumber; i++) {
		if (i == 10) {
			over = 1;
			break;
		}
		s[i] = 1;
	}
	if (over)
		printf(">>>%d���� ����ȵ�\n", seatNumber - i);
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

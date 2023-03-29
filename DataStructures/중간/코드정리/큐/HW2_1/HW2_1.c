#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 3

typedef struct {
	char name[100];
	char gender;
} element;

typedef struct {
	int front;
	int rear;
	element data[MAX_QUEUE_SIZE];
} QueueType;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType* q)
{
	q->rear = 0;
	q->front = 0;
}

void print_queue(QueueType* q)
{
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % MAX_QUEUE_SIZE;
			printf("%s ", q->data[i].name);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
}

int get_count(QueueType* q)
{
	if (q->rear < q->front)
		return (q->rear + MAX_QUEUE_SIZE - q->front);
	else
		return (q->rear - q->front);
}

int is_full(QueueType* q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

int is_empty(QueueType* q)
{
	return (q->front == q->rear);
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다.");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear].gender = item.gender;
	strcpy(q->data[q->rear].name, item.name);
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

element peek(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

void check(QueueType* q, QueueType* p, element item)
{
	if (is_empty(p))
		printf("아직 대상자가 없습니다.");
	else if (is_full(p))
		printf("대기자가 꽉찼으니 담기회를 이용\n");
	else {
		enqueue(q, item);
		if (is_empty(p))
			printf("기다려주십시요.\n");
	}
}

int main(void)
{
	QueueType manQ;
	QueueType womanQ;
	element newPerson;
	char ch;

	init_queue(&manQ);
	init_queue(&womanQ);

	printf("미팅 주선 프로그램입니다.\n");

	do {
		printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
		if (ch == 'i') {
			printf("이름을 입력: ");
			scanf("%s", newPerson.name);
			while (getchar() != '\n');
			printf("성별을 입력<m or f>: ");
			scanf("%c", &newPerson.gender);

			if (newPerson.gender == 'm')
				check(&manQ, &womanQ, newPerson);
			else
				check(&womanQ, &manQ, newPerson);

			if (!is_empty(&manQ) && !is_empty(&womanQ))
				printf("커플이 탄생했습니다! %s와 %s\n", dequeue(&womanQ).name, dequeue(&manQ).name);
		}
		else if (ch == 'c') {
			printf("남성 대기자 %d명: ", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명: ", get_count(&womanQ));
			print_queue(&womanQ);
		}
		while (getchar() != '\n');
	} while (ch != 'q');

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char name[100];
	char gender;
} element;

typedef struct QueueNode{
	element data;
	struct QueueNode* link;
} QueueNode;

typedef struct {
	QueueNode* front, * rear;
} LinkedQueueType;

void init(LinkedQueueType* q)
{
	q->rear = 0;
	q->front = 0;
}

void print_queue(LinkedQueueType* q)
{
	int i;

	for (QueueNode* temp = q->front; temp != NULL; temp = temp->link)
		printf("%s ", temp->data.name);
	printf("\n");
}

int get_count(LinkedQueueType* q)
{
	int cnt = 0;

	for (QueueNode* temp = q->front; temp != NULL; temp = temp->link)
		cnt++;

	return cnt;

}

int is_full(LinkedQueueType* q)
{
	return 0;
}

int is_empty(LinkedQueueType* q)
{
	return (q->front == NULL);
}

void enqueue(LinkedQueueType* q, element data)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
	temp->data = data;
	temp->link = NULL;
	if (is_empty(q)) {
		q->front = temp;
		q->rear = temp;
	}
	else {
		q->rear->link = temp;
		q->rear = temp;
	}
}

element dequeue(LinkedQueueType* q)
{
	QueueNode* temp = q->front;
	element data;
	if (is_empty(q)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else {
		data = temp->data;
		q->front = q->front->link;
		if (q->front == NULL)
			q->rear = NULL;
		free(temp);
		return data;
	}
}

element peek(LinkedQueueType* q)
{
	if (is_empty(q)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else
		return q->front->data;
}

int main(void)
{
	LinkedQueueType manQ;
	LinkedQueueType womanQ;
	element newPerson;
	char input;

	init(&manQ);
	init(&womanQ);

	printf("미팅 주선 프로그램입니다.\n");

	printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
	scanf("%c", &input);
	while (input != 'q') {
		if (input == 'i') {
			printf("이름을 입력: ");
			scanf("%s", newPerson.name);
			while (getchar() != '\n');
			printf("성별을 입력(m of f): ");
			scanf("%c", &newPerson.gender);
			while (getchar() != '\n');
			if (newPerson.gender == 'm') {
				if (is_empty(&womanQ)) {
					printf("아직 대상자가 없습니다. ");
					if (is_full(&manQ))
						printf("대기자가 꽉찼으니 담기회를 이용\n");
					else {
						printf("기다려주십시요.\n");
						enqueue(&manQ, newPerson);
					}
				}
				else {
					printf("커플이 탄생했습니다! %s과 %s\n", newPerson.name, peek(&womanQ).name);
					dequeue(&womanQ);
				}
			}
			else {
				if (is_empty(&manQ)) {
					printf("아직 대상자가 없습니다. ");
					if (is_full(&womanQ))
						printf("대기자가 꽉찼으니 담기회를 이용\n");
					else {
						printf("기다려주십시요.\n");
						enqueue(&womanQ, newPerson);
					}
				}
				else {
					printf("커플이 탄생했습니다! %s과 %s\n", newPerson.name, peek(&manQ).name);
					dequeue(&manQ);
				}
			}
		}
		else if (input == 'c') {
			printf("남성 대기자 %d명:", get_count(&manQ));
			print_queue(&manQ);
			printf("여성 대기자 %d명:", get_count(&womanQ));
			print_queue(&womanQ);
		}
		printf("i(nsert, 고객입력), c(heck, 대기자 체크), q(uit):");
		scanf("%c", &input);
		while (getchar() != '\n');
	}
}
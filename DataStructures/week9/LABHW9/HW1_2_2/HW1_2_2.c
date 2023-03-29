#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define MAX_STRING 100

typedef struct {
	int num;
	char str[MAX_STRING];
} element;

typedef struct StackNode {
	element data;
	struct StackNode* link;
} StackNode;

typedef struct {
	StackNode* top;
} LinkedStackType;

void init(LinkedStackType* s)
{
	s->top = NULL;
}

int is_empty(LinkedStackType* s)
{
	return (s->top == NULL);
}

int is_full(LinkedStackType* s)
{
	return 0;
}

void push(LinkedStackType* s, element item)
{
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode));
	temp->data = item;
	temp->link = s->top;
	s->top = temp;
}

element pop(LinkedStackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택이 비어있음\n");
		exit(1);
	}
	else {
		StackNode* temp = s->top;
		element data = temp->data;
		s->top = s->top->link;
		free(temp);
		return data;
	}
}

element peek(LinkedStackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->top->data;
}

void stack_print(LinkedStackType* s)
{
	int i;

	if (s->top == NULL)
		printf("<empty>\n");
	else {
		StackNode* p = s->top;
		printf("[%d, %s] <- top\n", p->data.num, p->data.str);
		for (p = p->link; p != NULL; p = p->link)
			printf("[%d, %s]\n", p->data.num, p->data.str);
	}
	printf("--\n");
}

int main(void)
{
	LinkedStackType s;
	element e;

	init(&s);
	stack_print(&s);
	e.num = 10;
	strcpy(e.str, "ten");
	push(&s, e);
	stack_print(&s);
	e.num = 20;
	strcpy(e.str, "twenty");
	push(&s, e);
	stack_print(&s);
	e.num = 30;
	strcpy(e.str, "thirty");
	push(&s, e);
	stack_print(&s);
	e.num = 40;
	strcpy(e.str, "fourty");
	push(&s, e);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	e.num = 50;
	strcpy(e.str, "fifty");
	push(&s, e);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 3
#define MAX_STRING 100

typedef struct {
	int num;
	char str[MAX_STRING];
} element;

typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init(StackType* s)
{
	s->top = -1;
}

int is_empty(StackType* s)
{
	return (s->top == -1);
}

int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, int item, char *name)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else {
		s->data[++(s->top)].num = item;
		strcpy(s->data[(s->top)].str, name);
	}
}

element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}

element peek(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[s->top];
}

void stack_print(StackType* s)
{
	int i;

	if (s->top == -1)
		printf("<empty>\n");
	else {
		printf("[%d, %s] <- top\n", s->data[s->top].num, s->data[s->top].str);
		for (i = s->top - 1; i >= 0; i--)
			printf("[%d, %s]\n", s->data[i].num, s->data[i].str);
	}
	printf("--\n");
}

int main(void)
{
	StackType s;

	init(&s);
	stack_print(&s);
	push(&s, 10, "ten");
	stack_print(&s);
	push(&s, 20, "twenty");
	stack_print(&s);
	push(&s, 30, "thirty");
	stack_print(&s);
	push(&s, 40, "forty");
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	push(&s, 50, "fifty");
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
	pop(&s);
	stack_print(&s);
}
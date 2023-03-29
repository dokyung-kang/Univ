#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
}ListNode;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

ListNode* insert_next(ListNode* head, ListNode* pre, element value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = pre->link;
	p->link = p;
	
	return head;
}

ListNode* insert_first(ListNode* head, int value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = NULL;
	p->link = head;
	head = p;

	return head;
}

ListNode* insert_last(ListNode* head, int value)
{
	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = NULL;
	if (head == NULL)
		head = p;
	else {
		while (temp->link != 0)
			temp = temp->link;
		temp->link = p;
	}

	return head;
}

ListNode* delete_next(ListNode* head, ListNode* pre)
{
	ListNode* removed;
	removed = pre->link;
	pre->link = removed->link;
	free(removed);

	return head;
}

ListNode* delete_first(ListNode* head)
{
	ListNode* removed;
	
	if (head == NULL)
		return NULL;
	removed = head;
	head = removed->link;
	free(removed);

	return head;
}

ListNode* delete_last(ListNode* head)
{
	ListNode* temp = head;
	ListNode* preTemp = temp;
	ListNode* removed;

	if (head == NULL)
		return NULL;
	if (head->link == NULL){
		removed = head;
		head = NULL;
	}
	else {
		while (temp->link != NULL) {
			preTemp = temp;
			temp = temp->link;
		}
		removed = temp;
		preTemp->link = NULL;
	}
	free(removed);
	return head;
}

void print_list(ListNode* head)
{
	ListNode* p;
	for (p = head; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("\n");
}

ListNode* search(ListNode* head, int x)
{
	ListNode* p;
	p = head;
	while (p != NULL) {
		if (p->data == x)
			return p;
	}
	return NULL;
}

ListNode* concat(ListNode* head1, ListNode* head2)
{
	ListNode* p;
	if (head1 == NULL)
		return head2;
	else if (head2 == NULL)
		return head1;
	else {
		p = head1;
		while (p->link != NULL)
			p = p->link;
		p->link = head2;
		return head1;
	}
}

int is_in_list(ListNode* head, element item)
{
	ListNode* temp = head;

	if (head == NULL)
		return 0;
	while (temp != NULL) {
		if (temp->data == item)
			return 1;
		temp = temp->link;
	}
	return 0;
}

int get_length(ListNode* head)
{
	ListNode* temp = head;
	int cnt = 0;

	if (head == NULL)
		return 0;
	while (temp != NULL) {
		temp = temp->link;
		cnt++;
	}
	return cnt;
}

int get_total(ListNode* head)
{
	ListNode* temp = head;
	int total = 0;

	if (head == NULL)
		return 0;
	while (temp != NULL) {
		total += temp->data;
		temp = temp->link;
	}
	return total;
}

element get_entry(ListNode* head, int pos)
{
	ListNode* temp = head;
	int cnt = 0;

	if (head == NULL)
		return -1;
	while (temp != NULL) {
		if (cnt == pos)
			return temp->data;
		temp = temp->link;
		cnt++;
	}
	return -1;
}

ListNode* delete_by_key(ListNode* head, int key)
{
	ListNode* temp = head;

	if (head == NULL)  
		return NULL; 	
	else if (head->data == key) {      
		head = head->link;
		return NULL;
	}
	else 			{
		while (temp->link != NULL){
			if (temp->link->data == key)
				temp->link = temp->link->link;
			temp = temp->link;
		}
	}

	return head;
}

ListNode* insert_pos(ListNode* head, int pos, element value)
{
	ListNode* temp = head;
	ListNode*  p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;

	int cnt = 0;

	if (head == NULL)
		return NULL;
	else if (pos == 0) {
		insert_first(head, value);
	}
	else {
		while (temp->link != NULL) {
			cnt++;
			if (pos == cnt) {
				p->link = temp->link;
				temp->link = p;
			}
			temp = temp->link;
		}
	}

	return head;
}

ListNode* delete_pos(ListNode* head, int pos)
{
	ListNode* temp = head;
	int cnt = 0;

	if (head == NULL)
		return NULL;
	else if (pos == 0) {
		delete_first(head);
	}
	else {
		while (temp->link != NULL) {
			cnt++;
			if (cnt == pos)
				temp->link = temp->link->link;
			temp = temp->link;
		}
	}

	return head;
}

int main(void)
{
	ListNode* list1 = NULL, * list2 = NULL, * list3 = NULL;
	//list1 = 30->20->10->를 만든다. 이때 10, 20, 30의 순으로 노드를 삽입한다. 
	list1 = insert_first(list1, 10);
	list1 = insert_first(list1, 20);
	list1 = insert_first(list1, 30);
	// list1을 출력
	printf("list1 = ");
	print_list(list1);
	//list1의 맨 앞 노드를 삭제한다 즉, list1 = 20->30->
	list1 = delete_last(list1);
	// list1을 출력
	printf("list1 = ");
	print_list(list1);
	//list2 = 11->22->33->44->를 만든다. 이때 11, 22, 33, 44의 순으로 노드를 삽입한다.
	list2 = insert_last(list2, 11);
	list2 = insert_last(list2, 22);
	list2 = insert_last(list2, 33);
	list2 = insert_last(list2, 44);
	// list2를 출력
	printf("list2 = ");
	print_list(list2);
	// list2의 맨 뒤 노드를 삭제한다. 즉, list2 = 11->22->33->
	list2 = delete_last(list2);
	// list2를 출력
	printf("list2 = ");
	print_list(list2);
	//list2를 역순으로 바꾼 리스트를 list3가 가리키게 한다. list3 = 33->22->11->를 만든다. (선택사항)
	list3 = insert_first(list3, 11);
	list3 = insert_first(list3, 22);
	list3 = insert_first(list3, 33);
	//list3를 출력한다. 
	printf("list3 = ");
	print_list(list3);
	// list1 = 20->30->33->22->11->를 만든다. 즉, list1과 list3를 합쳐서 list1이 가리키게 한다. 
	list1 = concat(list1, list3);
	//list1을 출력한다.
	printf("list1 = ");
	print_list(list1);
	printf("\n");

	//(A) 주의: 여기서부터는 list1만 사용하여 함수들을 테스트하자 

	printf("---is_in_list함수:---\n");
	int have = 0;
	have = is_in_list(list1, 20);
	if (have == 1)
		printf("list1에 20이 있다.\n");
	else
		printf("list1에 20이 없다.\n");
	have = is_in_list(list1, 60);
	if (have == 1)
		printf("list1에 60이 있다.\n");
	else
		printf("list1에 60이 없다.\n\n");

	printf("---get_length함수:---\n");
 	int nodeCnt = get_length(list1);
	printf("list의 노드 개수: %d\n\n", nodeCnt);

	printf("---get_total함수:---\n");
	int listTotal = get_total(list1);
	printf("list1의 데이터 합: %d\n\n", listTotal);

	printf("---get_entry함수:---\n");
	int find = 0;
	find = get_entry(list1, 2);
	if (find != -1)
		printf("2번째에 있는 노드의 data 반환: %d\n\n", find);
	else
		printf("없다\n\n");

	printf("---delete_by_key함수:---\n");
	list1 = delete_by_key(list1, 22);
	print_list(list1);
	printf("\n");

	printf("---insert_pos함수:---\n");
	list1 = insert_pos(list1, 1, 43);
	print_list(list1);
	printf("\n");

	printf("---delete_pos함수:---\n");
	list1 = delete_pos(list1, 1);
	print_list(list1);
	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct ListNode {		// 노드타입
	element data;
	struct ListNode* link;
} ListNode;
void print_list(ListNode* head) // 틀림(수정해야)
{
	ListNode* p;
	if (head == NULL) 
		return;
	p = head->link;
	if (head != head->link) {
		do {
			printf("%d->", p->data);
			p = p->link;
		} while (p != head);
	}
	printf("%d->리스트의 끝", p->data); // 마지막노드출력
		printf("\n");
}
ListNode* insert_first(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link; // (1) 
		head->link = node; // (2) 
	}
	return head; // 변경된헤드포인터를반환한다.
}
ListNode* insert_last(ListNode* head, element data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->data = data;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link; // (1) 
		head->link = node; // (2) 
		head = node; // (3) 
	}
	return head; // 변경된헤드포인터를반환한다.
}
ListNode* delete_first(ListNode* head)
{
	ListNode* temp;
	if (head == NULL) {
		printf("리스트가 비어 삭제를 못함\n"); 
			return NULL;
	}
	else if (head == head->link) { // 즉하나의노드남았을때
			temp = head;
		head = NULL;
		free(temp);
	}
	else {
		temp = head->link;
		head->link = temp->link;
		free(temp);
	}
	return head;
}
ListNode* delete_last(ListNode* head)
{
	ListNode* temp;
	ListNode* preTemp;

	if (head == NULL) {
		printf("리스트가 비어 삭제를 못함\n");
		return NULL;
	}
	else if (head == head->link) { // 즉하나의노드남았을때
		temp = head;
		head = NULL;
		free(temp);
	}
	else {
		head = head->link;

		preTemp = head;
		temp = head;
		while (temp->link != head) {
			preTemp = temp;
			temp = temp->link;
		}
		preTemp->link = temp->link;
		head = preTemp;
		free(temp);
	}
	return head;
}
ListNode* search(ListNode* head, element data)
{
	ListNode* temp;

	if (head == NULL)
		return NULL;
	else {
		temp = head;
		while (temp->data != data)
			temp = temp->link;
		temp = temp->link;
		head = temp;
	}
	return head;
}
int get_size(ListNode* head)
{
	ListNode* temp = head;
	int cnt;

	if (head == NULL)
		return 0;
	cnt = 1;
	while (temp->link != head) {
		temp = temp->link;
		cnt++;
	}
	return cnt;
}
// 원형연결리스트테스트프로그램
int main(void)
{
	ListNode* head = NULL;
	// list = 10->20->30->40
	head = insert_last(head, 20);
	print_list(head);
	head = insert_last(head, 30);
	print_list(head);
	head = insert_last(head, 40);
	print_list(head);
	head = insert_first(head, 10);
	print_list(head);
	head = delete_first(head);
	print_list(head);
	//추가
	printf("추가\n");
	head = delete_last(head);
	print_list(head);
	head = search(head, 30);
	print_list(head);
	int size = get_size(head);
	printf("%d", size);
	return 0;
}
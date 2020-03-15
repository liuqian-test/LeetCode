/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: list01.cpp
*       &Created Time: 20Century 2020年02月07日 星期五 21时07分18秒 
*                          CST  Day/038 and Week/05 of this year
*       &Description:
***********************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}Node;

Node *insert(Node *head, Node *node, int index) {
	if(head == NULL) {
		if(index != 0)return head;
		head = node;
		return head;
	}
	if(index == 0) {
	node->next = head;
	head = node;
	return head;
	}
	Node *temp = head;
	int count = 0;
	while(temp->next != NULL && count < index - 1) {
		temp = temp->next;
		count++;
	}

	if(count == index - 1){
	node->next = temp->next;
	temp->next = node;
	return head;
	}
	return head;
}

void output(Node *head) {
	printf("%d",head->data);
	Node *temp = head->next;
	while(temp != NULL) {
	printf(" %d", temp->data);
	temp = temp->next;
	}
	printf("\n");
}

void clear(Node *node) {
	Node *temp = node;
	while(temp != NULL) {
	Node *dd = temp;
	temp = temp->next;
	free(dd);
	}
//	free(node);
	free(temp);
}



 Node * delete01(Node *head, int index) {
	if(head == NULL) return head;
	Node *temp = head;
	if(index == 0) {
	head = head->next;
	free(temp);
	return head;
	}
	
	int count = 0;
	while(temp->next != NULL && count < index - 1) {
		temp = temp->next;
		count++;
	}
	if(count == index - 1 && temp->next != NULL) {
	Node *dd = temp->next;
	temp->next = dd->next;
	free(dd);
	}
	return head;

}

Node *reserve(Node *head) {
	Node *current_node, *next_node;
	current_node = head->next;
	head->next = NULL;
	while(current_node != NULL) {
		next_node = current_node->next;
		current_node->next = head;
		head = current_node;
		current_node = next_node;
	}
	return head;

}



int main () {
	Node *head = NULL;
	for (int i = 0;i < 10; i++) {
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->data = i;
		newNode->next = NULL;
		head = insert(head, newNode, i);
	
	}
//	printf("%d\n",head);
	output(head);
	head = delete01(head, 2);
	output(head);
	head = reserve(head);
	output(head);
	clear(head); 
	return 0;
}

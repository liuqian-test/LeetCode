/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: linklist01.cpp
*       &Created Time: 20Century 2020年02月03日 星期一 02时53分41秒 
*                          CST  Day/034 and Week/05 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;

}Node;

Node *insert(Node *head, Node *node, int index) {
	if(node == NULL) {
		if(index != 0) return head;
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
	if(count == index - 1) {
		node->next = temp->next;
		temp->next =  node;
	}
	return head;
}

Node *delete_node(Node *head, int index) {
	if(head == NULL) return head;
    Node *current_node = head;
	if(index == 0) {
		head = head->next;
		free(current_node);
		return head;
	}
	int count = 0;
	while(current_node->next != NULL && count < index - 1) {
		current_node = current_node->next;
		count++;
	}
	if(count == index - 1 && current_node->next != NULL) {
		Node *delete1 = current_node->next;
		current_node->next = delete1->next;
		free(delete1);
	}
	return head;
}

Node *reverse(Node *head) {
	if(head == NULL) return head;
	Node *next_node, *current_node;
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

void output(Node *head) {
	if(head == NULL) return ;
	Node *temp = head;
	while(temp != NULL) {
	//temp = temp->next;
	printf("%d ", temp->data);
	temp = temp->next;
	
	}
	printf("\n");
}

void clear(Node *head) {
	Node *temp = head;
	while(temp != NULL) {
	Node *deleten = temp;
	temp = temp->next;
	free(deleten);
	}

}

int main() {
	Node *head = NULL;
	for(int i = 0; i < 10; i++) {
		Node *newNode = (Node *)malloc(sizeof(Node));
		newNode->data = i;
		newNode->next = NULL;
		head = insert(head, newNode, i);
	}
	output(head);
	head = delete_node(head, 2);
	output(head);
	head = reverse(head);
	output(head);
	clear(head);
	return 0;
}

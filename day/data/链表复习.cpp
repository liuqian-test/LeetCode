/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 链表复习.cpp
*       &Created Time: 20Century 2020年02月19日 星期三 21时24分01秒 
*                          CST  Day/050 and Week/07 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
	struct Node *front;
}Node;

Node *insert(Node *head, Node *node, int index) {
	if(head == NULL) {
		if(index != 0)return head;
		head = node;
		return head;
	}
	if(index == 0) {
		node->next = head;
		node->front = NULL;
		head = node;
		return head;
	}
	Node *q = head;
	int count = 0;
    while(q->next != NULL && count < index - 1) {
		q = q->next;
		count++;
	}
	if(count == index - 1) {
	node->next = q->next;
	node->front = q;
	q->next = node;
	return head;
	}
    
	return head;

}


Node *delete01(Node *head, int index) {
	if(head == NULL)return head;
	Node *temp = head;
	int i = 0;
	for(temp; i < index - 1 && temp->next != NULL; i++) {
		temp = temp->next;
	}
	if(i == index - 1){
	Node *dd = temp->next;
	temp->next = dd->next;
	free(dd);
	}
	return head;
}


void output(Node *node) {
//	printf("%d ", node->len);
	if(node == NULL) return ;
	Node *temp = node;
	while(temp->next!= NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	if(temp == NULL) {
		printf("\n");
		temp = temp->front;
	//	printf("%d ", temp->data);
		while(temp != NULL) {
		printf("%d ", temp->data);
		}
	
	}
	}
	printf("\n");

}

void clear(Node *head) {
	if(head == NULL)return ;
	 Node *current_node = head;
 while (current_node != NULL) {
        Node *delete_node = current_node;
        current_node = current_node->next;
        free(delete_node);
    }
}

Node *reverse(Node *head) {
	if(head == NULL)return head;
	Node *c = head->next;
	Node *n;
	head->next = NULL;
	while(c) {
	n = c->next;
	c->next = head;
	head = c;
	c = n;
	}
return head;

}




int main() {
	Node *head = NULL;
	for(int i = 0; i < 10; i++) {
		Node *node = (Node *)malloc(sizeof(Node));
		node->data = i;
		node->next = NULL;
		node->front = NULL;
	   head = insert(head, node, i);
	}
	output(head);
	delete01(head, 2);
   head = reverse(head);
	output(head);


	clear(head);
	return 0;
}

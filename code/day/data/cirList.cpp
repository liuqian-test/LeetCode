/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: cirList.cpp
*       &Created Time: 20Century 2020年02月12日 星期三 22时26分54秒 
*                          CST  Day/043 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}Node;

typedef struct List {
	Node *head;
	int length;
}List;

Node *getNode(int val) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = val;
	node->next = NULL;
	return node;
}

List *getList() {
	List *list = (List *)malloc(sizeof(List));
	list->head = NULL;
	list->length = 0;
	return list;
}

int insert(List *l, int index, int val) {
	Node *p = l->head->next;
	Node *node = getNode(val);
	if(l->head == NULL) {
		if(index != 0)return 0;
		l->head = node;
		l->head->next = l->head;
		return 1;
	}
//	if(index < 0 || index > l->length) return 0;
	if(index == 0) {
	node->next = l->head->next;
	l->head->next = node;
	return 1;
	}
	int count = 0;
/*	while(p != l->head && count < index - 1){
		 p = p->next;
		 count++;
	} */
	if(count == index - 1) {
		node->next = p->next;
		p->next = node;
	}
	if(node == l->head->next) {
		l->head = node;
	}
	l->length++;
	return 1;
}

 void clearNode(Node *node) {
	free(node);
}

void print(List *l, int index) {
	Node *temp = l->head->next;
	while (--index) {
		temp = temp->next;
	}
	printf("%d\n", temp->data);
}

/*int delete01(List *l, int index) {
	if(l->head == NULL) return 0;
	Node *temp = l->head;
	if(index < 0 || index > l->length - 1)return 0;
	if(index == 0) {
	l->head = l->head->next;
	return 1;
	}
	int count = 0;
	while(count < index - 1) {
		temp = temp->next;
	    count++;
	}
	if(count == index - 1) {
		Node *dd = temp->next;
		temp->next = dd->next;
		free(dd);
	}
	l->length--;
	return 1;
}*/

void clearList(List *l) {
	Node *temp = l->head, *q;
	while(temp->next != NULL) {
	q = temp->next;
	clearNode(temp);
	temp = q;;
	}
}

void output(List *l) {
	if(l == NULL) return ;
	Node *temp = l->head->next;
	/*while(1 == 2) {
		printf("%d ",temp->data);
		temp = temp->next;
	} */
	printf("\n");
}
int main() {
	List *ll = getList();
	for(int i = 0; i < 10; i++) {
	  insert(ll, i, i);
	}
	output(ll);
//	print(ll, 12);
	clearList(ll);
	return 0;
}


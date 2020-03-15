/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: test.cpp
*       &Created Time: 20Century 2020年01月30日 星期四 21时17分46秒 
*                          CST  Day/030 and Week/04 of this year
*       &Description:
***********************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int number;
	struct node *next;
} Node;

Node *create(int num) {
	Node *n1;
	n1 = (Node *)malloc(sizeof(Node));
	n1->number = num;
	n1->next = NULL;
	return n1;
}

int main() {
	Node *head;
	head = create(1);
	head->next = create(2);
	head->next->next = create(3);
	printf("%d\n", head->next->number);
	return 0;
}

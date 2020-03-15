/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 顺序表复习.cpp
*       &Created Time: 20Century 2020年02月19日 星期三 20时42分30秒 
*                          CST  Day/050 and Week/07 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int *data;
	int size, cnt;
}Node;

void init(Node *node, int len) {
	node->data = (int *)malloc(sizeof(int ) * len);
	node->size = len;
	node->cnt = 0;
}

void expand(Node *node) {
	node->size = node->size * 2;
	int *temp = node->data;
	node->data = (int *)malloc(sizeof(int) * node->size);
	for(int i = 0; i <= node->cnt; i++) {
		node->data[i] = temp[i];
	}
	return ;
}

void insert(Node *node, int val, int index) {
	if(node == NULL) {
		if(index != 0)return ;
		 node->data[index] = val;
		 return ;
	}
	if(node->size - 1 <=node->cnt) expand(node);
	for(int i = node->cnt; i >= index; i--) {
		node->data[i + 1] = node->data[i]; 
	}
	node->data[index] = val;
	node->cnt++;
	return ;
}

void delete01(Node *node, int index) {
	if(node == NULL)return ;
	if(index < 0 || index > node->cnt)return ;
	for(int i = index; i < node->cnt; i++) {
		node->data[i] = node->data[i + 1];
	}
	node->cnt--;
	return ;
}

void output(Node *node) {
	for(int i = 0; i < node->cnt; i++) {
		printf("%d ", node->data[i]);
	}
	printf("\n");
}

int main() {
	Node *node = (Node *)malloc(sizeof(Node));
	init(node, 5);
	for(int i = 0; i < 10; i++) {
		insert(node, i, i);
	}
	output(node);
	delete01(node, 2);
	output(node);
	return 0;
}

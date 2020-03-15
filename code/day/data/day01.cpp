/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: day01.cpp
*       &Created Time: 20Century 2020年02月11日 星期二 14时49分55秒 
*                          CST  Day/042 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int *data;
	int size, length;
}Node;

Node *init(int n) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = (int *)malloc(sizeof(int) * n);
	node->size = n;
	node->length = 0;
	return node;
}

int exand(Node *node) {
	node->size = 2 * node->size;
	int *temp = node->data;
	node->data = (int *)realloc(node->data, sizeof(int) * node->size);
	for(int i = 0; i < node->length; i++) {
		node->data[i] = temp[i];
			}
	return 1;
}


int insert(Node *node, int index, int value) {
	if(node == NULL) return 0;
	if(index < 0 || index > node->length) return 0;
	if(node->length == node->size) {
		if(!expand(node)) return 0;
		printf("expand success, size = %d\n", node->size);
	}
	for(int i = node->length; i > index; i--) {
		node->data[i] = node->data[i - 1];
	
	}
	node->data[index] = value;
	node->length++;
	return 1;

}

int delete01(Node *node, int index) {
	if(node == NULL) return 0;
	if(index < 0 || index >= node->length )return 0;
	for(int i = index + 1; i < node->length; i++) {
		node->data[i - 1] = node->data[i]; 
	}
	node->length--;
	return 1;
}


void clear(Node *node) {
	
	if(node == NULL)return ;
	free(node->data);
	free(node);
	return ;
}



void output(Node *node) {
	printf("Node(%d) = [", node->length);
	for(int i = 0; i < node->length; i++) {
		i && printf(", ");
		printf("%d", node->data[i]);
	}
	printf("\n");
	return ;
} 
int main() {
	Node *node = init(20);
	int op, ind, val;
	for(int i = 0; i < 20; i++) {
   //	op = rand() % 2;
        op = rand() % 2;
	ind = rand() % (node->length + 1);
	switch(op) {
	
	
	}
	insert(node, i, i);
	}
	output(node);
	clear(node);
	return 0;
}

/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: sequence.cpp
*       &Created Time: 20Century 2020年02月07日 星期五 14时40分03秒 
*                          CST  Day/038 and Week/05 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int length, size;
	int *data;
} Node;

void init(Node *node, int length) {
	node->data = (int *)malloc(sizeof(int) * length);
	node->size = length;
	node->length = 0;
}


void clear(Node *node) {
	free(node->data);
	free(node);
}

void expand(Node *node) {
	node->size = 2 * node->size;
	int *temp = node->data;
	node->data = (int *)malloc(sizeof(int) * node->size);
	for(int i = 0; i < node->length; i++) {
		node->data[i] = temp[i];
	}
	free(temp);
}
int insert(Node *node, int index, int num) {
	if(index < 0 || index > node->length) return 0;
	if(node->length >= node->size) {
	expand(node);
	}
	for(int i = node->length; i >= index; i--) {
	node->data[i] = node->data[i - 1];
	}
	node->data[index] = num;
	node->length++;
	return 1;
}

int search(Node *node, int value) {
	for(int i = 0; i < node->length; i++) {
		if(node->data[i] == value) {
			printf("success\n");
			return i;			
	}
	}
	printf("failed\n");
	return 0;

}

int delete01(Node *node, int index) {
	if(index < 0 || index > node->length) return 0;
	for(int i = index; i < node->length + 1; i++) {
		node->data[i] = node->data[i + 1];
	}
	node->length--;
	return 1;
}

void output(Node *node) {
	for(int i = 0; i < node->length; i++) {
		printf("%d ", node->data[i]);
	}
	printf("\n");
}
int main() {
	Node *node =(Node *)malloc(sizeof(Node));
	init(node, 10);
	for(int i = 1; i <= 10; i++) {
		insert(node, i - 1, i);
	}
	output(node);
    printf("%d search(value = 2)\n ", search(node, 2));
	delete01(node, 6);
	output(node);
	return 0;
}

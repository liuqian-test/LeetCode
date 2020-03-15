/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &File Name: 5.递归删除节点.cpp
*       &Created Time: 2020年02月28日 星期五 11时51分55秒                     
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *lchild, *rchild; 
}Node;


typedef struct stack{
	Node **val;
	int size,top;
}stack;

Node *init_node(int value) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = value;
	node->lchild = NULL;
	node->rchild = NULL;
	return node;
}

int push(stack *s, Node *node) {
	if(s == NULL)return 0;
	if(s->top + 1 >= s->size)return 0;
	s->val[++(s->top)] = node;
	return 0;
}

Node *top(stack *s) {
	if(s->top == -1)return 0;
	return s->val[s->top];
}

void pop(stack *s) {
	if(s->top == -1)return ;
	--(s->top);

}

Node *buildTree(stack *s, char *str) {
	int k = 0;
	Node *node, *lnode;
	while(str[0]) {
		switch(str[0]) {
			case '(': k = 1;
					  push(s, node);
					  node = NULL;
					  break;
			case ')':
					  lnode = top(s);
					  pop(s);
					  break;
			case ',': k = 2;
					  node = NULL;
					  break;
			case ' ':break;
			default : 
					 node = init_node(str[0]);
					 if(s->top != -1 && k == 1){
						top(s)->lchild = node;
					 }
					 if(s->top != -1 && k == 2) {
						top(s)->rchild = node;
					 }
					 break;
		}
			str++;
	}

	return lnode;
}

void output(Node *node, int num) {
	if(node == NULL || node->data == num)return ;
	printf("%c", node->data);
	if((node->lchild == NULL || node->lchild->data == num) && (node->rchild == NULL || node->rchild->data == num))return ;
	printf("(");
	if(node->lchild != NULL)output(node->lchild, num);
	if(node->rchild != NULL)printf(","),output(node->rchild, num);
    printf(")");
	return ;

}



void clear(stack *s) {
	free(s->val);
	free(s);
}

int main() {
	char str[50];
	char c;
	int i = 0;
	while(scanf("%c", &c)) {
		if(c == '\n')break;
		str[i++] = c;
	}

	stack *s = (stack *)malloc(sizeof(stack));
	s->val = (Node **)malloc(sizeof(Node *) * i);
	s->top = -1;
	s->size = i;
	Node *node = buildTree(s, str);
	scanf("%c", &c);
	output(node, c);
	return 0;
}

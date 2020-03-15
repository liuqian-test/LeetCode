/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 6.层次遍历二叉树.cpp
*       &Created Time: 20Century 2020年02月26日 星期三 00时07分44秒 
*                          CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{
	int data;
	struct Node *lchild, *rchild;
}Node;

typedef struct stack{
	Node **val;
	int size, top;
}stack;

Node *init_node(int value) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->lchild = NULL;
	node->rchild = NULL;
	node->data = value;
	return node;
}

stack *init_s(int len){
	stack *s = (stack *)malloc(sizeof(stack));
	s->val = (Node **)malloc(sizeof(Node *) * len);
	s->top = -1;
	s->size = len;
	return s;
}

Node *top(stack *s) {
	return s->val[s->top];
}

void pop(stack *s) {
	if(s->top == -1) return ;
	s->top--;
}



Node *build_tree(stack *s, char *str) {
	int k = 0;
	Node *node = NULL, *lnode = NULL;
	while(str[0]) {
		switch(str[0]) {
			case '(':
					s->val[++(s->top)] = node;
					k = 1;
					node = NULL;
					break;
			case ',':
					k = 2;
					node = NULL;
					break;
			case ')':
					lnode = top(s);
					pop(s);
					
			case ' ': break;
			default:
					  node = init_node(str[0]);
					  if(s->top != -1 && k == 1) top(s)->lchild = node;
					  if(s->top != -1 && k == 2) top(s)->rchild = node;
					  break;

		}
		str++;
	
	}
		return lnode;
}

void output(Node *node) {
	if(node == NULL) return ;
	output(node->lchild);
	printf("%c ", node->data);
	output(node->rchild);

}




int main() {
	char str[50];
	char ch;
	int i = 0;
	while(scanf("%c", &ch)) {
		if(ch == '\n')break;
		str[i++] = ch;
	}
	str[i] = 0;
	printf("%s", str);
	stack *s = init_s(strlen(str));
	Node *node = build_tree(s, str);
	printf("%c  \n", node->data);
	output(node);
	printf("\n");
	return 0;
}

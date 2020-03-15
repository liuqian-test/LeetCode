/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 递归删除节点.cpp
*       &Created Time: 20Century 2020年02月17日 星期一 00时01分48秒 
*                          CST  Day/048 and Week/07 of this year
*       &Description:
***********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 50

typedef struct Node{
	int data;
	struct Node *lchild, *rchild;
}Node;

typedef struct Stack{
	Node **data;
	int size, top;
}Stack;

int push_s(Stack *s, Node *node) {
	if(s == NULL) return 0;
	if(s->top + 1 >= s->size)return 0;
	s->data[++(s->top)] = node;
	return 1;
}

int empty(Stack *s) {
	return s->top == -1;
}

int pop_s(Stack *s) {
	if(empty(s))return 0;
	--(s->top);
	return 0;
}

Node *top_s(Stack *s) {
	if(empty(s))return NULL;
	return s->data[s->top];
}


void clear_s(Stack *s) {
	free(s->data);
	free(s);
}

Node *init_node(char ch) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = ch;
	node->lchild = NULL;
	node->rchild = NULL;
	return node;
}
void clear_node(Node *node) {
	if(node == NULL)return;
	clear_node(node->lchild);
	clear_node(node->rchild);
	free(node);
}

Node *build_Tree(char *str, Stack *stack) {
	Node *node, *lnode;
	int cnt = 0;
	while(str[0]) {
		switch(str[0]) {
			case '(' :{
					  cnt = 0;
					  push_s(stack, node);
					  node = NULL;
					  break;
					 }
			case ')':{
					 lnode = top_s(stack);
					 pop_s(stack);
					 }
			case ',':{
					 cnt = 1;
					 node = NULL;
					 break;
					 }
			case ' ':{
					 break;
					 }
			default: {
					 node = init_node(str[0]);
					 if(!empty(stack) && cnt == 0)top_s(stack)->lchild = node;
					 else if(!empty(stack) && cnt == 1)top_s(stack)->rchild = node;
					 break;
					 }
					 ++str;
		}
	}
		if(node && !lnode)lnode = node;
		clear_s(stack);
		return lnode;	
	
}

void output(Node *node, char ch) {
	if(node == NULL || node->data == ch) return ;
	printf("%c", node->data);
	if((node->lchild == NULL || node->lchild->data == ch) && (node->rchild == NULL || node->rchild->data == ch))return ;
	printf("(");
	if(node->lchild && node->lchild->data != ch)output(node->lchild, ch);
	if(node->rchild && node->rchild->data != ch)output(node->rchild, ch);
	printf(")");
	return ;

}




int main() {
	
	char str[MAX_N];
	char c;
	int i = 0;
	while(scanf("%c", &c)) {
		if(c == '\n')break;
		str[i++] = c;
	}
	int len = strlen(str);
	Stack *s = (Stack *)malloc(sizeof(Stack));
	s->data = (Node **)malloc(sizeof(Node *) *len);
	s->size = len;
	s->top = -1;
	str[i] = 1;
	scanf("%c", &c);
	Node *node = build_Tree(str, s);
	output(node, c);
	clear_node(node);
	return 0;
}


/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 表转树.cpp
*       &Created Time: 20Century 2020年02月15日 星期六 20时30分47秒 
*                          CST  Day/046 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Node{
	char data;
	struct Node *lchild, *rchild;
}Node;

typedef struct Tree{
	Node *root;
	int n;
}Tree;


Node *getNewNode(int val) {
  Node *p = (Node *)malloc(sizeof(Node));
	p->data = val;
	p->lchild = p->rchild = NULL;
	return p;
}

Tree *getNewTree() {
	Tree *tree = (Tree *)malloc(sizeof(Tree));
	tree->root = NULL;
	tree->n = 0;
	return tree;
}

typedef struct Stack{
	Node **data;
	int top, size;
}Stack;

Stack *init_stack(int n) {
	Stack *s = (Stack *)malloc(sizeof(Stack));
	s->data = (Node **)malloc(sizeof(Node **) * n);
	s->top = -1;
	s->size = n;
	return s;
}

Node *top(Stack *s) {
return s->data[s->top];

}

int push(Stack *s, Node *val) {
	if(s == NULL) return  0;
	if(s->top == s->size - 1) return 0;
	s->data[++(s->top)] = val;
	return 1;
}

int pop(Stack *s){
 if(!empty(s)) return 0;
 s->top--;
 return 1;
}
Node *build(char *str, int *node_num) {
	Node *temp = NULL, *p = NULL;
	Stack *s = init_stack(strlen(str));
	int flag = 1;
	while(str[0]) {
		switch(str[0]) {
			case '(':
				push(s, temp);
				flag = 0;
				temp = NULL;
				break;
			case ')':
				p = top(s);
				pop(s);
				break;
			case ',':
				flag = 1;
				temp = NULL;
				break;
			case ' ':
				break;
			default:
				temp = getNewNode(str[0]);
				if(!empty(s) && flag == 0){
					top(s)->lchild = temp;;
				
				}else if(!empty(s) && flag == 1){
				
					top(s)->rchild = temp;
				}
				++(*node_num);
				break;
		
		}
		++str;
	
	}
	if(temp && !p)p = temp;
	return p;

}


void clear_node(Node *node) {
	if(node == NULL)return ;
	clear_node(node->lchild);
	clear_node(node->rchild);
	return ;
}

void clear_tree(Tree *tree) {
	if(tree == NULL)return ;
	clear_node(tree->root);
	return ;
}

int empty(Stack *s) {
	return s->top == -1;

}

void in_order(Node *root) {
	printf("in_order(%d) = [");
	in_order(root->lchild);
	printf("%d", root->data);
	in_order(root->rchild);
	return ;

}





int main() {
char str[100];
scanf("%[^\n]s", str);
int node_num = 0
Tree *tree = getNewTree();
tree->root = build(str, &node_num);
tree->n = node->num;
pre_order(tree), printf("\n");
in_order(tree), printf("\n");;
post_order(tree),printf("\n");

	return 0;
}

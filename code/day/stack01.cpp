/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: stack01.cpp
*       &Created Time: 20Century 2020年02月13日 星期四 21时57分46秒 
*                          CST  Day/044 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
	int *data;
	int top, size;
}Stack;

Stack *init(int n) {
	Stack *s = (Stack *)malloc(sizeof(Stack));
	s->data = (int *)malloc(sizeof(int) * n);
	s->size = n;
	s->top = -1;
	return s;
}

int push(Stack *s, int val) {
	if(s == NULL) return 0;
	if(s->top + 1 >= s->size) return 0;
	s->top++;
	s->data[s->top] = val;
	return 1;
}

int top(Stack *s) {
	return s->data[s->top];
}

int pop(Stack *s) {
	if(s == NULL) return 0;
	s->top--;
	return 1;
}

int clear(Stack *s) {
	if(s == NULL) return 0;
	free(s->data);
	free(s);
	return 1;
}

void output(Stack *s) {
	if(s == NULL) return ;
	for(int i = 0; i <= s->top; i++) {
		printf("%d ",s->data[i]);
	}
	printf("\n");
}
int main() {
	Stack *s = init(10);
	for(int i = 0; i < 10; i++) {
		push(s, i);
	}
	printf("top(%d) ",top(s));
	pop(s);
	output(s);

	return 0;
}

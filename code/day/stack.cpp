/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: stack.cpp
*       &Created Time: 20Century 2020年02月09日 星期日 22时36分16秒 
*                          CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
	int *data;
	int size, top;
}Stack;

void init(Stack *s, int size) {
	s->data = (int *)malloc(sizeof(int) * size);
	s->size = size;
	s->top = -1;
}

int push(Stack *s, int num) {
	if(s->top + 1 >= s->size) return 0;
	s->top++;
	s->data[s->top] = num;
	return 0;
}

int top1(Stack *s) {

return s->data[s->top];
}

void output(Stack *s) {
	for(int i = s->top; i >= 0; i--) {
	printf("%d " , s->data[i]);
	}
	printf("\n");
}

void pop(Stack *s) {
	s->top--;
}

void clear() {



}
int main() {
	Stack *ss = (Stack *)malloc(sizeof(Stack));
	init(ss, 10);
	for(int i = 1; i <= 10; i++) {
		push(ss, i);
	}
	output(ss);
	pop(ss);
	output(ss);

	return 0;
}

/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: stack.cpp
*       &Created Time: 20Century 2020年02月13日 星期四 20时14分39秒 
*                          CST  Day/044 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Stack {
	int *data;
	int top, size;

}Stack;

Stack *init(int n) {
	Stack *s = (Stack *)malloc(sizeof(Stack));
	s->data = (int *)malloc(sizeof(int) * n);
	s->top = -1;
	s->size = n;
	return s;
}

int empty(Stack *s) {
	return s->top == -1;
}

int top(Stack *s) {
	return s->data[s->top];
}

int expand(Stack *s) {
	s->size = s->size * 2;
	int *temp = s->data;
	s->data = (int *)malloc(sizeof(int) * s->size);
	for(int i = 0; i <= s->top; i++) {
		s->data[i] = temp[i]; 
	}
	free(temp);
	printf("success");
	return 1;
}



int push(Stack *s, int val) {
	if(s == NULL) return 0;
	if(s->top + 1 == s->size) expand(s);
	s->top++;
	s->data[s->top] = val;
	return 1;
}

int pop(Stack *s) {
	if(s == NULL) return 0;
	if(empty(s)) return 0;
	s->top--;
	return 1;
}

void output(Stack *s ){
		printf("Stack(%d) = [", s->top + 1);
		for(int i = 0; i <= s->top; i++) {
			i && printf(", ");
			printf("%d", s->data[i]);
		}
		printf("]\n");
		}


void clear(Stack *s) {
	if(s == NULL) return ;
	free(s->data);
	free(s);
	return ;
}



int main() {
	srand(time(0));
	Stack *s = init(20);
	int op , val;
	for(int i = 0; i < 20; i++) {
		op = rand() % 4;
		val = rand() % 100;
		switch(op) {
			case 0:
			case 1:
			case 2: {
					printf("push %d to Stack  =  %d\n", val, push(s, val));		
					}break;

			case 3: {
					printf("pop %d from Stack =",top(s));
				    printf("%d\n",pop(s));
					}break;
		}
		output(s);
		printf("\n");
	
	}

	clear(s);
	return 0;
}

/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: Queue.cpp
*       &Created Time: 20Century 2020年02月13日 星期四 19时11分49秒 
*                          CST  Day/044 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Queue {
	int *data;
	int head, tail, size;
	int count;
}Queue;

Queue *init(int n) {
	Queue *q = (Queue *)malloc(sizeof(Queue));
	q->data = (int *)malloc(sizeof(int) *n);
	q->size = n;
	q->head = 0;
	q->tail = -1;
	q->count = 0;
	return q;
}

int empty(Queue *q) {
	return q->count == 0;
}

int front(Queue *q) {
	return q->data[q->head];
}

void expand(Queue *q) {
	q->size = q->size * 2;
	int *temp = q->data;
	q->data = (int *)malloc(sizeof(int) * q->size);
	for(int i = q->head; i != q->tail + 1; i++) {
	q->data[i] = temp[i];
	i = i % (q->count);
	}
	q->head = 0;
	q->tail = q->count;
	free(temp);
	return ;

}

/*int expand(Queue *q) {
	int size01 = q->size;
	int *p;
	while(size01) {
		p = (int *)malloc(sizeof(int ) * (q->size + size01));
		if(p)break;
		size01 /= 2;
	}
	if(p == NULL) return 0;
	for(int i = q->head, j = 0; j < q->count; j++) {
		p[j] = q->data[i + j] % (q->size);
	}
	q->size += size01;
	q->head = 0;
	q->tail = q->count;
	free(q->data);
	q->data = p;
}
*/

int push(Queue *q, int val) {
	if(q == NULL) return 0;
	if(q->count >= q->size) expand(q);
	q->tail = (q->tail + 1) % (q->size);
	q->data[q->tail] = val;
	q->count++;
	return 1;
}

int pop(Queue *q) {
	if(q == NULL) return 0;
	if(empty(q))return 0;
	q->head++;
	q->count--;
	return 1;
}

void output(Queue *q) {
	printf("Queue(%d) = [", q->count);
	for(int i = q->head; i != (q->tail) + 1; i++) {
		printf("%d ",q->data[i % (q->size)]);
		i = i % (q->size);
	}

    printf("]\n");
}


void clear(Queue *q) {
	if(q == NULL) return ;
	free(q->data);
	free(q);
	return ;

}
int  main() {
	srand(time(0));
	Queue *q = init(10);
	int op, val;
	for(int i = 0; i < 20; i++) {
		op = rand() % 4;
		val = rand() % 100;
		switch(op) {
			case 0:
			case 1:
			case 2:{
				    printf("push %d to Queue = %d\n", val,push(q, val));
				   }break;
			case 3:{
				   printf("pop %d from Queue =", front(q));
				   printf("%d\n", pop(q));
				   
				   
				   }break;
		}
		output(q);
		printf("\n");
		
	}

	clear(q);
	return 0;
}

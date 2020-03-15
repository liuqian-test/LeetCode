/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: requeue.cpp
*       &Created Time: 20Century 2020年02月09日 星期日 21时15分16秒 
*                          CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
	int *data;
	int length, head, tail;
	int count;
}Queue;

void init(Queue *q, int length) {
	q->data = (int *)malloc(sizeof(int) * length);
	q->length = length;
	q->head = 0;
	q->tail = -1;
	q->count = 0;
}

int push(Queue *q, int num) {
	if(q->count == q->length)return 0;
	q->tail = (q->tail + 1) % q->length;
	q->data[q->tail] = num;
	return 1;
}

int output(Queue *q) {
	int temp = q->head;
	while(temp != q->tail + 1) {
	printf("%d ",q->data[temp]);
	temp = (temp + 1) % q->length;
	}
	return 1;
}
int main() {
	Queue *qq = (Queue *)malloc(sizeof(Queue));
	init(qq,15);
	for(int i = 1; i <= 10; i++) {
		push(qq, i);
	}
	output(qq);

	return 0;
}

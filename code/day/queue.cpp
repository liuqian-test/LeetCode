/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: queue.cpp
*       &Created Time: 20Century 2020年02月09日 星期日 20时49分18秒 
*                          CST  Day/040 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
	int *data;
	int head, tail, length;
}Queue;

void init(Queue *q, int length) {

	q->data = (int *)malloc(sizeof(int) * length);
	q->length = length;
	q->head = 0;
	q->tail = -1;

}

int push(Queue *q, int num) {
	if(q->tail + 1 >= q->length) return 0;
	q->tail++;
	q->data[q->tail] = num;
	return 1;
}

int output(Queue *q) {
	if(q->tail < q->head)return 0;
	for(int i = q->head; i <= q->tail; i++) {
		printf("%d ",q->data[i]);
	}	
	printf("\n");
	return 1;
}

int main() {

	Queue *qq = (Queue *)malloc(sizeof(Queue));
	init(qq, 10);
	for(int i = 1; i <= 10; i++) {
		push(qq, i);
	}
	output(qq);
	return 0;
}

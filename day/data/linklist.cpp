/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: linklist.cpp
*       &Created Time: 20Century 2020年02月11日 星期二 19时10分43秒 
*                          CST  Day/042 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ListNode{
	int data;
	struct ListNode *next;
	int length;
}ListNode;


ListNode *init(int val) {

	ListNode *p = (ListNode *)malloc(sizeof(ListNode));
	p->data = val;
	p->next = NULL;
	p->length = 0;
	return p;
}

int insert(ListNode *node, int index, int val) {
	if(node == NULL) return 0;
	if(index < 0 || index > node->length) return 0;

}

int delete01(ListNode *head, int index) {
	if(node == NULL) return 0;
	if(index  < 0 || index > node->length - 1)
	ListNode *temp = head;
	int count = 0;
	while(temp->next != NULL && count < ) {
	
	}

}



void clear(ListNode *p) {
	free(p->data);
	return ;
}


int main() {
	ListNode *head = NULL;
	#define max_op 20
	for(int i = 0; i < max_op; i++) {	
	int op, ind, val;
	op = rand() % (l->length + 3) - 1;
	val = rand() % 100;
	switch(op) {
		case 0:
		case 1:
		case 2: {
				printf("insert %d at %d to list = %d\n", val, ind, val);
				
				} break;
		case 3: {
				printf("delete item at %d from List = %d\n", ind, delete01());
				
				}
	
	}
	}


	return 0;
}

/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: list2.cpp
*       &Created Time: 20Century 2020年02月11日 星期二 23时03分38秒 
*                          CST  Day/042 and Week/06 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
	struct Node *front;
}Node;

typedef struct List {
	Node *head;
	int length;
}List;

Node *getNode(int val) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = val;
	node->next = NULL;
	node->front = NULL;
	return node;
}

List *getList() {
	List *list = (List *)malloc(sizeof(List));
	list->head = NULL;
	list->length = 0;
	return list;
}

int insert(List *l, int index, int val) {
	Node *p = l->head;
	Node *node = getNode(val);
	if(l->head == NULL) {
		if(index != 0)return 0;
		l->head = node;
		l->head->front = NULL;
		return 1;
	}
//	if(index < 0 || index > l->length) return 0;
	if(index == 0) {
	node->next = l->head;
	node->front = NULL;
	l->head = node;

	}
	int count = 0;
	while( count < index - 1){
		 p = p->next;
		 count++;
	}
	if(count == index - 1) {
		node->next = p->next;
		node->front = p;
		p->next = node;
	}
	l->length++;
	return 1;
}

 void clearNode(Node *node) {
	free(node);
}

int delete01(List *l, int index) {
	if(l->head == NULL) return 0;
	Node *temp = l->head;
	if(index < 0 || index > l->length - 1)return 0;
	if(index == 0) {
	l->head = l->head->next;
	return 1;
	}
	int count = 0;
	while(count < index - 1) {
		temp = temp->next;
	    count++;
	}
	if(count == index - 1) {
		Node *dd = temp->next;
		temp->next = dd->next;
		free(dd);
	}
	l->length--;
	return 1;
}

void clearList(List *l) {
	Node *temp = l->head, *q;
	while(temp->next != NULL) {
	q = temp->next;
	clearNode(temp);
	temp = q;;
	}
}

void output(List *l) {
	if(l == NULL) return ;
	Node *temp = l->head;
	while(temp->next != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
	while(temp != NULL) {
	printf("%d ", temp->data);
	temp = temp->front;
	}
	printf("\n");
}

/*int sertch(List *l, int val) {
	int ind = 0;
	Node *p = l->head;
	while(p && p->data != val) {
		p = p->next;
		ind++;
	}
	if(ind == l->length) return -1;
	return ind;
}

void output_search(List *l, int ind) {
	char str[100];
	int offset = 3;
	Node *p =l->head;
	while(ind != -1) {
		offset += sprintf(str, "%d->", p->data);
		ind -= 1;
		p = p->next;
	}
	for(int i = 0; i < offset; i++) {
		printf(" ");
	}
	printf("^\n");
	for(int i = 0; i < offset; i++) {
		printf(" ");
	}
	printf("|\n\n");
}
*/
int main() {
    #define max_op 20
    List *l = getList();
    int op, ind, val;
    for (int i = 0; i < max_op; i++) {
        op = rand() % 4;
      //  ind = rand() % (l->length);
        val = rand() % 100;
        switch (op) {
            case 0:
			case 1:
            case 2: {
                printf("insert %d at %d to List = %d\n", val, ind, insert(l, i, val));
            } break;
            case 3: {
              //  printf("erase item at %d from List = %d\n", ind, delete01(l, ind));
            } break;
        }
        output(l);
        printf("\n");
    }
    clearList(l);
    return 0;
}

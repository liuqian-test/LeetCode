/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 堆排序.cpp
*       &Created Time: 20Century 2020年02月17日 星期一 22时49分18秒 
*                          CST  Day/048 and Week/07 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Heap {
    int *data, size;
} Heap;

void init(Heap *h, int length_input) {
    h->data = (int *)malloc(sizeof(int) * length_input);
    h->size = 0;
    }

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void push(Heap *h, int value) {
    h->data[h->size] = value;
    int current = h->size;
    int father = (current - 1 ) / 2;
    if(h->data[current] > h->data[father]){
		
		swap(&h->data[current], &h->data[father]);
		current = father;
		father = (current - 1) / 2;

	}
	h->size++;
}

void output(Heap *h) {
    for(int i = 0; i < h->size; i++) {
        printf("%d ", h->data[i]);
    }
    printf("\n");
}

int top(Heap *h) {
    return h->data[0];
}

void update(Heap *h, int pos, int n) {
    int lchild = 2 * pos + 1;
    int rchild = 2 * pos + 2;
    int max = pos;
    if(lchild < n && h->data[lchild] > h->data[max]) {
        max = lchild;
    }
    if(rchild < n && h->data[rchild] > h->data[max]) {
        max = rchild;
    }
    if(max != pos) {
        swap(&h->data[pos], &h->data[max]);
        update(h, max, n);
    }
}

void pop(Heap *h) {
    swap(&h->data[h->size - 1], &h->data[0]);
    h->size--;
    update(h, 0, h->size);
}

void heap_sort(Heap *h) {
    for(int i = h->size - 1; i > 0; i--) {
        swap(&h->data[i], &h->data[0]);
        update(h, 0, i);
    }
}

void clear(Heap *h) {
    free(h->data);
    free(h);
}

int main() {
    Heap *heap = (Heap *)malloc(sizeof(Heap));
    init(heap, 120);
    int n, num, dele;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        push(heap, num);
    }
    scanf("%d", &dele);
    for(int i = 0; i < dele; i++) {
        printf("%d\n", top(heap));
        pop(heap);
    }
    output(heap);
    heap_sort(heap);
    output(heap);
    return 0;
}

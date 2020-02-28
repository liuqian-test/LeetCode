/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode232.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时37分18秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


typedef struct {
    int *data;
    int top, size, cnt;
} MyQueue;

/** Initialize your data structure here. */

MyQueue* myQueueCreate() {
    MyQueue *my = (MyQueue *)malloc(sizeof(MyQueue));
    my->data = (int *)malloc(sizeof(int) * 50);
    my->top = -1;
    my->size = 50;
    my->cnt = 0;
    return my;
}

/** Push element x to the back of queue. */
void myQueuePush(MyQueue* obj, int x) {
    if(obj == NULL) return ;
    if(obj->top + 1 > obj->size)return ;
    obj->data[++(obj->top)] = x;
    obj->cnt++;
}

/** Removes the element from in front of queue and returns that element. */
int myQueuePop(MyQueue* obj) {
    int num = obj->data[0];
  obj->data++;
  obj->cnt--;
  return num;
}

/** Get the front element. */
int myQueuePeek(MyQueue* obj) {
    for(int i = 0; i <= obj->top; i++) {
        if(obj->data[i] > 0)return obj->data[i];
    }
  return ;
}

/** Returns whether the queue is empty. */
bool myQueueEmpty(MyQueue* obj) {
  return obj->cnt == 0;
}

void myQueueFree(MyQueue* obj) {
    if(obj == NULL) return ;
   // free(obj->data);
    free(obj);
}

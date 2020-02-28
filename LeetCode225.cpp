/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode225.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时36分33秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


typedef struct {
    int *data;
    int tail, head, size;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
    MyStack *my = (MyStack *)malloc(sizeof(MyStack));
    my->data = (int *)malloc(sizeof(int)  * 50);
    my->tail = -1;
    my->head = 0;
    my->size = 50;
    return my;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
    if(obj == NULL)return ;
    if(obj->tail + 1 >= obj->size)return ;
    obj->data[++(obj->tail)] = x;
    //printf("%d ", x);
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
    if(obj == NULL) return 0;
    int num = obj->data[obj->tail];
    --obj->tail;
    return num;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
  return obj->data[obj->tail];
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
  return obj->tail == -1;
}

void myStackFree(MyStack* obj) {
    if(obj == NULL)return ;
    free(obj->data);
    free(obj);
}

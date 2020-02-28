/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 206.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时30分57秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL) return NULL;
    struct ListNode * current = head->next, *nextnode;
    head->next = NULL;
    while(current) {
        nextnode = current->next;
        current->next = head;
        head = current;
        current = nextnode;
    }
    return head;
}

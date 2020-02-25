/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 19.cpp
*       &Created Time: 20Century 2020年02月25日 星期二 22时42分49秒 
*                          CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head == NULL || head->next == NULL) return NULL;
    struct ListNode temp, *first, *second;
    temp.next = head;
    first = &temp;
    second = &temp;
    while (n--) { first = first->next; }
    while (first->next) {
        first = first->next;
        second = second->next;
    }
    struct  ListNode *dd = second->next;
    second->next = dd->next;
    free(dd);
    return temp.next;
}

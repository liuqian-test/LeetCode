/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 24.cpp
*       &Created Time: 20Century 2020年02月25日 星期二 22时47分37秒 
*                          CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *first, *second, node ;
    node.next = head;
    second = head;
    first = &node;
    while(second && second->next) {
        first->next = second->next;
        second->next = first->next->next;
        first->next->next = second;
        first = second;
        second = first->next;
    }
    return node.next;
}

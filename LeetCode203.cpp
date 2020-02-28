/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 203.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时30分18秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/

struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL)return false;
    if(head->val == val)head = head->next;
    struct ListNode *p, *q, node;
    node.next = head;
    p = &node;
    q = head;
    while(q != NULL) {
        if(q->val ==  val) {
            p->next = q->next;
            q = q->next;
            continue;
        }
        p = p->next;
        q = q->next;
    }
    return node.next;
}

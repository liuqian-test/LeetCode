/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 160.cpp
*       &Created Time: 20Century 2020年02月25日 星期二 22时48分19秒 
*                          CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;    
    while (p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}

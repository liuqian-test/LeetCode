/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 141.cpp
*       &Created Time: 20Century 2020年02月25日 星期二 22时48分50秒 
*                          CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


bool hasCycle(struct ListNode *head) {
    struct ListNode *temp = head;
    if(temp == NULL) return false;
    while(temp->next){
        if(temp->next <= temp)return true;
        temp = temp->next;
    }
    return false;
}

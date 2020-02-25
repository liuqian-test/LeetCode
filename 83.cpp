/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 83.cpp
*       &Created Time: 20Century 2020年02月25日 星期二 22时43分40秒 
*                          CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *temp = head;
    while(temp != NULL && temp->next != NULL) {
        if(temp->val == temp->next->val) {
            temp->next = temp->next->next;
            continue;
        }
        temp = temp->next;
        
    }
    return head;
}


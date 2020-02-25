/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 142.cpp
*       &Created Time: 20Century 2020年02月25日 星期二 22时49分35秒 
*                          CST  Day/056 and Week/08 of this year
*       &Description:
***********************************************************/


struct ListNode *detectCycle(struct ListNode *head) {
   if(head == NULL || head->next == NULL)return NULL;
  // printf("%d ", head->next->val);
   
    struct ListNode *temp = head, *temp1 = head;
    struct ListNode *cnt;
    int i = 0;
    while(temp != NULL) {
        if(temp->next <= temp) {
            //cnt = temp->next;
            return temp->next;
            //break;
        }
        temp = temp->next;
    }
  
return NULL;
}

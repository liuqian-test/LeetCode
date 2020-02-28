/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 234.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时31分33秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


//上课讲的方法
/*int get_length(Node *head) {
    int n = 0;
    while(head) n += 1, head = head->next;
    return n;
}

Node *reverse(Node *head, int n) {
    Node *q, *p, ret;
    while(n--) {
        p = p->next;
    }
    ret.next = NULL;
     while(p) {
         q = p->next;
         p->next = ret->next;
        ret->next =p;
        p = q;
     }
    return ret.next;
}


bool isPalindrome(Node *head) {
int len = get_length(head);
Node **p = head, *q = reverse(head, (len + 1));  //反转
while(q) {
    if(p->val - q->val) return false;
    p = p->next;
    q = q->next;
}
    return true;
}


*/

bool isPalindrome(struct ListNode* head){
     if(head == NULL) return true;
      int stack[100000] = {0};
      struct ListNode *temp = head;
      struct ListNode *temp1= head;
    int top = -1;
    while(temp) {
        stack[++top] = temp->val;
      //  printf("%d  ", stack[top]);
        temp = temp->next;
    }
    while(temp1) {
        if(temp1->val != stack[top--])return false;
        temp1 = temp1->next;
    }

    return true;
}

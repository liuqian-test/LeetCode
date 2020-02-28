/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 237.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时32分32秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/

//将要删除的节点覆盖
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

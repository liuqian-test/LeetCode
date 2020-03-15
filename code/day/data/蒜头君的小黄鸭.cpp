/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 蒜头君的小黄鸭.cpp
*       &Created Time: 20Century 2020年03月08日 星期日 15时11分34秒 
*                          CST  Day/068 and Week/10 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *lchild, *rchild, *father;
}Node;

Node *init(int value, Node *fa) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = value;
    node->lchild = NULL;
    node->rchild = NULL;
    node->father = fa;
    return node;
}

Node *insert(Node *node, int value) {
    if(node == NULL) {
        node = init(value, NULL);
    }else if(value < node->data) {
        if(node->lchild == NULL) node->lchild = init(value, node);
        else node->lchild = insert(node->lchild, value);
    }else if(value > node->data) {
        if(node->rchild == NULL) node->rchild = init(value, node);
    	else node->rchild = insert(node->rchild, value);
    }
    return node;
}

Node *search(Node *node, int value) {
    if(node == NULL || node->data == value) {
        return node;
    }else if(value < node->data) {
        if(node->lchild == NULL) return NULL;
        else return search(node->lchild, value);
    }else if(value > node->data) {
        if(node->rchild == NULL) return NULL;
        else return search(node->rchild, value);
    }     
}

Node *predecessor(Node *node) {
    Node *temp = node->lchild;
    while(temp && temp->rchild) {
        temp = temp->rchild;
    }
    return temp;
}

Node *successor(Node *node) {
   Node *temp = node->rchild;
    while(temp && temp->rchild) {
        temp = temp->rchild;
    }
    return temp;
}

void remove_node(Node *delete_node) {
    	Node *temp = NULL;
    if(delete_node->lchild != NULL) {
        temp = delete_node->lchild;
        temp->father = delete_node->father;
    }
    if(delete_node->rchild != NULL) {
        temp = delete_node->rchild;
        temp->father = delete_node->father;
    }
	if(delete_node->father->lchild == delete_node) {
        delete_node->father->lchild = temp;
    }    
    if(delete_node->father->rchild == delete_node) {
        delete_node->father->rchild = temp;
    }

    delete_node->rchild = NULL;
    delete_node->lchild = NULL;
    free(delete_node);
}


void delete01(Node *node, int value) {
    if(node == NULL) return ;
    Node *delete_node, *current_node;
    current_node = search(node, value);
    if(current_node == NULL) return ;
    if(node->lchild != NULL) {
        delete_node = predecessor(node);
    }else if(node->rchild != NULL) {
        delete_node = successor(node);
    }else {
        delete_node = current_node;
    }
    current_node->data = delete_node->data;
    remove_node(delete_node);
}

void output(Node *node) {
    if(node == NULL) return ;
    output(node->lchild);
    printf("%d ",node->data);
    output(node->rchild);
}

int main() {
    Node *root = NULL;
    int n, m, num;
    char str;
    scanf("%d %d", &n, &m);
    // printf("%d  %d", n, m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        root = insert(root, num);
    }
		
   
    for(int i = 0; i < m; i++) {
      scanf("%c", &str);
      scanf("%d", &num);
        printf("%c", str);
       // if(str == 'q')
        if(str == 'i') root = insert(root, num);
        if(str == 'd') delete01(root, num);
    }
    output(root);
    return 0;
}

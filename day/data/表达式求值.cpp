/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 表达式求值.cpp
*       &Created Time: 20Century 2020年02月18日 星期二 14时17分48秒 
*                          CST  Day/049 and Week/07 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
	int *data;
	int size;
}Stack;

void init() {


}

int main() {
	Stack *sz = (Stack *)malloc(sizeof(Stack));
	Stack *ysf = (Stack *)malloc(sizeof(Stack));
	init(sz,50);
	init(ysf, 50);
	char *str = (char *)malloc(sizeof(char) * 50);
	scanf("%s", str);
	for(int i = 0; str[i]; i++) {
		
	}

	return 0;
}

/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: struct01.cpp
*       &Created Time: 20Century 2020年01月30日 星期四 06时33分05秒 
*                          CST  Day/030 and Week/04 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <string.h>

struct person {
	int age;
	char name[20];
	float height;
};

int main() {
	struct person lq = {
	22, "liuqian", 162.2f
	
	};
	struct person lq1 = lq;
//	lq.age = 22;
//	strcpy(lq.name, "liuqian");
//	lq.height = 162.12f;
	printf("%d - %s - %.2f", lq1.age, lq1.name, lq1.height);
	return 0;
}

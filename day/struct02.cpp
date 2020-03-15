/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: struct02.cpp
*       &Created Time: 20Century 2020年01月30日 星期四 06时57分48秒 
*                          CST  Day/030 and Week/04 of this year
*       &Description:
***********************************************************/

#include <stdio.h>

typedef struct v {
	int x;
	int y;

}Vec;

Vec add(Vec *v1, Vec *v2) {

Vec result;
result.x = v2->x + v1->x;
result.y = v2->y + v1->y;
return result;
}

int main() {
Vec v1 = {1, 5};
Vec v2 = {2, 6};
Vec re = add(&v1, &v2);
printf("%d,-- %d", re.x, re.y);
	return 0;
}

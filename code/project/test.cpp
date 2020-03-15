/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: test.cpp
*       &Created Time: 20Century 2020年01月14日 星期二 18时17分05秒 
*                          CST  Day/014 and Week/02 of this year
*       &Description:
***********************************************************/

#include <iostream>
using namespace std;

#define ABS(x) _Generic((x), int : abs, double : fabs)(x)


int main() {
	int a = -123;
	double f = -12.3;
	printf("%d\n",ABS(a));
	printf("%lf\n",ABS(b));


	return 0;
}


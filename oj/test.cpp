/*************************************************************************
	> File Name: test.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月01日 星期日 14时04分58秒
 ************************************************************************/
#include<iostream>
#include<cstdio>
#include <ctime>
#define max 1000000


int main() {
	int n = 0, m = 0;
	for(int i = 0; i < max; i++) {

		double x = rand() * 1.0 / RAND_MAX * (rand() % 2 ? 1: -1);
		double y = rand() * 1.0 / RAND_MAX * (rand() % 2 ? 1: -1);
		if( x * x + y * y <= 1.0) m += 1;
	}
	return 0;
}

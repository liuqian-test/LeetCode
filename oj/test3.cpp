/*************************************************************************
	> File Name: test3.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月07日 星期二 19时47分07秒
 ************************************************************************/
#include<iostream>
#include <cmath>
#define EPS 1e-7
using namespace std;

double f(double x, double n) {
	return x * x - n;
}

double f_prime(double x) {
	return 2 * x;
}

double my_sqrt(double n) {
	double x = 1.0;
	int cnt = 0;
	while(fabs(f(x, n)) > EPS) {
	x = x - f(x, n) / f_prime(x);
	cnt += 1;
	}
	printf("run %d steps\n", cnt);
	return x;
}


int main() {
    double x;
	scanf("%lf", &x);
	printf("%lf\n", my_sqrt(x));
	return 0;
}


/*************************************************************************
	> File Name: test1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月07日 星期二 19时11分33秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define max 1000000
#define EPS 1e-7
double my_sqrt(double x) {
	double l = 0, r = (x <= 1.0 ? 1.0 : x);
	while(r - l > EPS) {
		double mid = (r + l) / 2.0;
		if((mid * mid <= x)) l = mid;
		else r = mid;
	}
	return l;
}

int main() {
	double x;
	scanf("%lf", &x);
	printf("%lf\n", my_sqrt(x));

	return 0;
}

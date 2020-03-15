/*************************************************************************
	> File Name: niudun.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月10日 星期二 20时20分33秒
 ************************************************************************/

#include<iostream>
#include<math.h>
using namespace std;
#define EPSL 1e-6
double F(double x) {
return x*x-2;
}
 double f(double x) {
 return 2*x;
 }
double NewTon(double (*F)(double),double(*f)(double)) {
	double x = 1.0;
	while(fabs(F(x) > EPSL)) {
		x = x - F(x) / f(x);
	}
	return x;
}

int main(){
printf("%lf\n",NewTon(F,f));
return 0;
}

/*************************************************************************
	> File Name: max.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月12日 星期四 18时30分07秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define MAX(a, b) ({\
		__typeof() __a = (a);\
		__typeof() __b = (b);\
	    (a) > (b) ? (a):(b); \
		})
#define P(func) {\
	printf("%s = %d\n",#func, func);\
}

int main() {	
	P( MAX(2,3));
	P(5 + MAX(2,3));
	P(MAX(2, MAX(3, 4)));
	
//	printf("%d",);
   return 0;

}

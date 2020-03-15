/*************************************************************************
	> File Name: fib.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月18日 星期三 10时57分19秒
 ************************************************************************/
#include <stdio.h>
#define max 4000000
int main(){
// 斐波那切数列4百万以内偶数求和
int a = 0; int b = 1;
int sum = 0;
while(b < max) {
	b = a + b;
	a = b - a;
     if(!(b & 1)) sum += b;
}
	printf("%d",sum);
	return 0;
}

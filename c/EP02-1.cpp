/*************************************************************************
	> File Name: EP02-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时47分35秒
 ************************************************************************/
#include <stdio.h>
#define N 4000000

int main() {
	int sum = 0, n = 0;
	int a = 0, b = 1, c;
	while(a + b <= N) {
		n += 1;
		b = a + b;
		a = b - a;
		if (b & 1)continue;
		sum += b;
	}
	printf("%d n = %d\n",sum,n);
	return 0;
}

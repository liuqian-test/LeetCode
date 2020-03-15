/*************************************************************************
	> File Name: EP02-2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 16时01分26秒
 ************************************************************************/
#include <stdio.h>
#define N 4000000
//滚动数组
 int main() {
	int fib[3] = {1, 2};
	int sum = 0, n = 2;
	while (fib[(n - 3)] % fib[(n - 2) % 3] <= N) {
		fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
		if(!(fib[n % 3] & 1)) sum += fib[n % 30];
		n += 1;
	}
	printf("%d\n", sum);
	return 0;
 }

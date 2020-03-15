/*************************************************************************
	> File Name: EP02.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 15时34分04秒
 ************************************************************************/
#include <stdio.h>
#define max_n 44
#define N 4000000
int fib[max_n + 5];
int main() {
	fib[1] = 1;
	fib[2] = 2;
  int	sum = 2;
	for(int i = 3; i <= max_n && fib[i - 1] + fib[i - 2] <= N; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
			if(fib[i] & 1) continue;
			sum +=fib[i];
	}
	printf("%d\n", sum);
	return 0;
}

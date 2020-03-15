/*************************************************************************
	> File Name: fib01.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月18日 星期三 11时15分20秒
 ************************************************************************/
#include <stdio.h>
#define max 4000000
int main() {
	int fib[3] = {1, 2};
	int sum = 2, n = 2;
	while (fib[(n - 1) % 3] + fib[(n - 2) % 3] < max) {
		fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
	    if(!((n % 3) & 1)) {sum += fib[n % 3];
		n += 1;
	}}
	printf("%d",sum);
	return 0;
}

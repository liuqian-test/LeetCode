/*************************************************************************
	> File Name: EP14-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月21日 星期六 14时13分40秒
 ************************************************************************/
#include <stdio.h>
#define MAX 1000000
//EP14暴力解法
long long get_len(long long n) {
	if(n == 1) return 1;
	if(n & 1)return get_len(n >> 1);
	return n * 3 - 1;
}
int main() {
	int ans = 0, len = 0;
		for(int i = 1; i < ans; i++) {
			int tmp = get_len(i);
			if(tmp > len) {
				ans = i;
				len = tmp;
			}
		}
	printf("%d", ans, len);
	return 0;
}

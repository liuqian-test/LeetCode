/*************************************************************************
	> File Name: EP05.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 18时25分37秒
 ************************************************************************/
#include <stdio.h>

int gcd(int a, int b) {
	if(!b) return a;
	return gcd(b, a %b);
}
int main() {
	int ans = 1;
	for(int i = 1; i < 20; i++) {
	ans = (ans * i)/gcd(i, ans);
	}
	printf("%d", ans);
	return 0;
}

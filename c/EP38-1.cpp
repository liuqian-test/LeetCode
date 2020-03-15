/*************************************************************************
	> File Name: EP38-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月24日 星期二 18时22分34秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
int digit(long long n) {
	return floor(log10(n)) + 1;
}

int cale(int x) {
	long long n = 1, ans = 0;
	while(digit(ans) < 9) {
		ans *= pow(10, digit(x * n));
		ans += n * x;
		n += 1;
	}
	if(digit(ans) - 9) return 0;
	int num[10] = {1, 0};
	int tmp = ans;
	while(tmp) {
		if(num[tmp % 10]) return 0;
		num[tmp % 10] = 1;
		tmp /= 10;
	}
	return ans;
}


int main() {	
	long long ans;
	for(int i = 1; i < 10000; i++) {
		int temp = cale(i);
		if(temp > ans) ans = temp;
	}
	printf("%lld", ans);
	return 0;
}

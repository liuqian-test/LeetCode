/*************************************************************************
	> File Name: EP38.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月24日 星期二 11时01分48秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define max 10000

int digit(int n) {
	return floor(log10(n)) + 1;
}

int cale(int x) {
	int n = 1;
	int ans = 0;
	while(digit(ans) < 9) {
		ans += ans * pow(10, digit(ans * n) + ans * n);
		n++;
	}
	if(digit(ans) - 9) return 0;
	int num[10];
	int temp = ans;
	while(temp) {
		if(num[temp % 10]) return 0;
		num[temp % 10] = 1;
		temp /= 10;
	}
	return ans;
}

int main() {
	int temp, ans = 0;
	for(int i = 1; i < max; i++) {
		temp = cale(i);
		if(temp > ans) ans = temp;
	}
	printf("%d", ans);
	return 0;
}

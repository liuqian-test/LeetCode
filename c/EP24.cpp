/*************************************************************************
	> File Name: EP24.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 19时18分53秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define max 10

int fac[max + 5] = {1};
int num[max + 5] = {1};

void init() {
	for(int i = 1; i <= max; i++) {
		fac[i] = i * fac[i - 1]; 
		num[i] = 1;
	}
	return ;
}

int get_num(int k, int n) {
	int step = k / n;
	int t = 0;
	int i = 0;
	while(t <= step) {
	t += num[i];
	i += 1;
	}
    cout << i - 1;
	k %= n;
	num[i - 1] = 0;
	return k;
}

int main() {
	init();
	int k = 1000000 - 1;
	for(int i = max - 1; i >= 0; i--) {
		 k = get_num(k, fac[i]);
	}
	cout << endl;
	return 0;
}

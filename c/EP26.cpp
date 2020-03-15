/*************************************************************************
	> File Name: EP26.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 20时28分15秒
 ************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
#define max 1000

int keep[max + 5];

int get_len(int n) {
	memset(keep, 0, sizeof(keep));
	int r = 1;
	keep[1] = 1;
	int t = 1;
	while(r) {
	r *= 10;
	r %= n;
	t += 1;
	if(keep[r]) return t - keep[r];
	keep[r] = t;
	}
	return 0;
}


int main() {
	int ans =0;
	int d = 0;
	for(int i = 2; i <= max ;i++) {
	if(ans < get_len(i)){
		ans = get_len(i);
		d = i;
	}
	}
	cout << d << "长度为：" << ans<< endl;
	return 0;
}

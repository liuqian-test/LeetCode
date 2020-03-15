/*************************************************************************
	> File Name: EP05.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 21时14分59秒
 ************************************************************************/

#include<iostream>
using namespace std;

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	long long ans = 1;
	for(int i = 1; i <= 20; i++) {
	   ans = (ans * i) / gcd(i, ans);
	}
	cout << ans << endl;
	return 0;
}

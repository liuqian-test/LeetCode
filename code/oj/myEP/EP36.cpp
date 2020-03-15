/*************************************************************************
	> File Name: EP36.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月08日 星期三 20时09分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int is_val(int n, int b) {

	int num = n;
	int m = 0;
	while(num) {
	m = m * b + num % b;
	num /= b;
	}
    if(m == n)return 1;
	return 0;
}

int main() {
	int ans = 0;
for(int i = 1; i < max; i++) {
	if(is_val(i, 10) && is_val(i, 2))ans += i;
}

	cout << ans << endl;
	return 0;
}

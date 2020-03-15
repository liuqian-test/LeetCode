/*************************************************************************
	> File Name: EP34.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月08日 星期三 16时19分37秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 999999

int num[10] = {1};

void init() {
	for(int i = 1; i < 10; i++) {
		num[i] = i * num[i - 1];
	}
}

int is_val(int i) {
	int n = i;
	int m = 0;
	long long sum = 0;
	while(n) {
	m = n % 10;
	n /= 10;
	sum += num[m];
	}
   if(sum == i) return 1;
   return 0;

}

int main() {
	init();
	long long ans = 0;
for(int i = 3; i < max; i++) {
	if(is_val(i)) ans += i;
}
	cout << ans << endl;
	return 0;
}

/*************************************************************************
	> File Name: EP47.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 18时09分03秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int prime[max + 5] = {0};

void init() {
	for(int i = 2; i <= max; i++) {
		if(prime[i]) continue;
		for(int j = i; j < max; j += i)
		prime[j] += 1;
	}
}

int main() {
	init();
	int ans = 0;
	for(int i = 1000; i <= max; i++) {
		int flag = 1;
		for(int j = 0; j < 4 && flag; j++) {
			flag = (prime[i + j] == 4);
		}
		if(!flag) continue;
		ans = i;
		break;
	}
	cout << ans << endl;

	return 0;
}

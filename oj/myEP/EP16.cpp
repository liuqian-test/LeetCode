/*************************************************************************
	> File Name: EP16.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 13时52分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000

int num[max + 5] = {1,1,0};

void init() {
	for(int i = 1; i <= max; i++) {
		for(int j = 1; j <= num[0]; j++) num[j] *= 2;
		for(int j = 1; j <= num[0]; j++) {
			if(num[j] < 10) continue;
			num[j + 1] += num[j] / 10;
			num[j] %= 10;
			num[0] += (j == num[0]);
		}
	}
	return ;
}

int main() {
	init();
	long long ans = 0;
	for(int i = 1; i <= num[0]; i++) {
		ans += num[i];
	}
	cout << ans << endl;
	return 0;
}

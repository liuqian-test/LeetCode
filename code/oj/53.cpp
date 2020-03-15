/*************************************************************************
	> File Name: 53.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 11时40分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int num[max + 5] = {0};

void init() {
	for(int i = 1; i <= max; i++) {
		for(int j = i; j <= max; j += i) {
		 num[j] += i;
		}
	}
	return ;
}
int main() {
init();
int ans = 0;
for(int i = 1; i <= max; i++) {
 if(num[i] > ans) ans = num[i];
}
cout << ans;
return 0;
}

/*************************************************************************
	> File Name: EP26.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 22时56分38秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max 1000

int num[max + 5] = {0};

int is_len(int n) {
	 memset(num, 0, sizeof(num));
	// num[1] = 1;
	int d = n;
	int r = 1;
	int t = 0;
	while(r) {
	r *= 10;
	r %= d;
	t += 1;
	if(num[r]) return (t - num[r]); 
	num[r] = t;
	}
	return 0;
}


int main() {
	int ans = 0;
	int d;
for(int i = 2; i < max; i++) {
	if(is_len(i) > ans) {
		
		ans = is_len(i);
		 d = i;
	}
}
	cout << d << "  " << ans <<  endl;
	return 0;
}

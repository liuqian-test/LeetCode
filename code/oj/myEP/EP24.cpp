/*************************************************************************
	> File Name: EP24.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 21时09分19秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 10

int num[max + 5] = {1, 1};
int jc[max + 5] = {1, 1};
void init() {
	for(int i = 1; i <= max; i++) {
		jc[i] = i * jc[i - 1];
		num[i] = 1;
	}
}

int is_val(int k, int i) {
	int step = k / i;
	int j;
	int t = 0;
	for(j = 0; t <= step; j += (t <= step) ) {
		t += num[j];
	}
	num[j] = 0;
	cout << j;
	k %= i;
	return k;

}

int main() {
	init();
	int k = 1000000 - 1;
	for(int i = max - 1; i >= 0; i--) {
		k = is_val(k, jc[i]);
	}
	cout << endl;
	return 0;
}

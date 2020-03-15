/*************************************************************************
	> File Name: EP42-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月02日 星期四 20时56分16秒
 ************************************************************************/

#include<iostream>
#include "EP42.h"
using namespace std;

int pen (int n) {
	return n * (n + 1) / 2;
}
int search(int n) {
	int l = 1, r = n, mid;
	while(l <= r) {
	mid = (l + r) >> 1;
	if(pen(mid) == n) return 1;
	if(pen(mid) < n) l = mid + 1;
	else r = mid - 1;
	}
	return 0;
}

int is_val(char *str) {
	int sum = 0;
	for(int i = 0; str[i]; i++) {
		sum += str[i] - 'A' + 1;
	}
	if(search(sum)) return 1;
	return 0;
}


int main() {
	int n = sizeof(str) / 100;
	int cnt = 0;
	    for(int i = 0; i < n; i++) {
			if(is_val(str[i])) cnt += 1;
		}
	cout << cnt << endl;
	return 0;
}

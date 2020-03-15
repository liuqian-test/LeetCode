/*************************************************************************
	> File Name: EP23.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 20时19分12秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 28123

int num[max + 5];

void init() {
	for(int i = 1; i <= max; i++) {
		for(int j = i + i; j <= max; j += i) {
		   num[j] += i;
		}
	}
	for(int k = 1; k <= max; k++) {
		if(num[k] < k || num[k] == k)num[k] = 0;
	}

	return ;
}

int main() {
	init();
	long long  sum = 0;
	for(int i = 1; i <= max; i++) {
		int h = 1;
	       for(int j = 1; j < i; j++) {
			if(num[j] && num[i - j]) h = 0;
		   }
		  if(h == 1) sum += i;
	}
	cout << sum << endl;
	return 0;
}

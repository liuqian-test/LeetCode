/*************************************************************************
	> File Name: EP24-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 20时14分24秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int main() {
	int num[10];
	for(int i = 0; i < 10; i++) num[i] = i;
		int k = 1000000 - 1;
		do {
			next_permutation(num, num + 10);
			k--;
	}while(k);
	for(int i = 0; i < 10; i++) {
		cout << num[i];
	}
	cout << endl;
	return 0;
}

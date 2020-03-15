/*************************************************************************
	> File Name: EP18-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 16时52分07秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max1 20

int val[max1][max1] = {0};

int main() {
	for(int i = 0; i < max1; i++) {
		for(int j = 0; j <= i; j++) {
		 cin >> val[i][j];
		}
	}
	
	for(int i = max1 - 2; i >= 0; i--) {
		for(int j = 0; j <= i; j++) {
			val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]); 
		}
	}
	cout << val[0][0] << endl;
	return 0;
}

/*************************************************************************
	> File Name: oj43.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 18时05分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define 1000

int val[max][max] = {0};

int is_val(int i, int j, int n){
	if((i + 1) == n) return val[i][j];
	int val1 = is_val(i + 1, j, n);
	int val2 = is_val(i + 1, j + 1, n);
	return (val1 > val2 ? val1: val2) + val[i][j];
}
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cin >> val[i][j];
		}
	}
	cout << is_val(0, 0, n) << endl;

	return 0;
}

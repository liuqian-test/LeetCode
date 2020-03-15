/*************************************************************************
	> File Name: sort02.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月31日 星期二 11时31分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
	int num[10];
	for(int i = 0; i < 10; i++) {
	 cin >> num[i];
	}
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 9; j++) {
			if(num[j] < num[j + 1]) swap(num[j], num[j + 1]); 
		}
	}
	for(int j = 0; j < 10; j++) {
	cout << num[j] << endl;
	}
	return 0;
}

/*************************************************************************
	> File Name: sort01.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月31日 星期二 11时15分56秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
int num[100] = {0};
int i = 10;

	while(i--){
		cin >>num[i];

}
	for(int j = 1; j < 11; j++) {
		for(int k = j + 1; k < 11; k++) {
			if(num[j] > num[k]) swap(num[j], num[k]);
		}
	}
	for(int j = 1; j <= 10; j++) {
	cout << num[j] << endl;
	}

	return 0;
}

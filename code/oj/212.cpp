/*************************************************************************
	> File Name: 212.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月24日 星期二 20时39分35秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct stu {
	char name[50];
}arr[50];

int cmp(struct stu a, struct stu b) {
	int t = strcmp(a.name, b.name);
	return t < 0;
}

int main() {
	for(int i = 0; i < 10; i++) cin >> arr[i].name;
	sort(arr, arr + 10,cmp);
	for(int i = 0; i < 10; i++) {
	cout << arr[i].name << endl;
	}
	return 0;
}

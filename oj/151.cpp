/*************************************************************************
	> File Name: 151.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月09日 星期四 09时51分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

int check(int a, int b) {

	if(a == b) return 0;
	if(a == 'O' && b == 'Y' ||
	   a == 'Y' && b == 'O' ||
	   a == 'H' && b == 'Y') {
		return 1;
	}
		return 2;
}

int main() {
	char m1, m2, l1, l2;
	cin >> m1 >> m2 >> l1 >> l2;
	if(check(m1, l1) == 1) {
		if(check(m1, l2) == 1 || check(m1, l2) == 0)cout << "MING";
		if(check(l2, m2) == 1 || check(l1, m2) == 0)cout <<"LIHUA";

	}
	if(check(m1,l1) == 0) {
		if(check(m2, l2) == 1) cout << "MING";
		if(check(l2, m2) == 1) cout << "LIHUA";
		if(check(m2, l2) == 0) cout << "TIE";
	}

	if(check(l1, m1) == 1){
		if(check(l1, m2) == 1 || check(l1, m2) == 0) cout << "LIHUA";
		if(check(m2, l1) == 1) {
			if(check(m2, l2) == 1|| check(m2, l2) == 0)cout << "MING";			  if(check(l2, m2) == 1) cout << "LIHUA";
		
		}
		}
	

	return 0;
}

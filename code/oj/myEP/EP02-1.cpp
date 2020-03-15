/*************************************************************************
	> File Name: EP02-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 18时39分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 4000000

int main() {

	int a = 1, b = 2;
	int sum = 2;
	while(b <= max) {
	b = a + b;
	a = b - a;
   if(!(b & 1))sum += b;
	}
	cout << sum << endl;
	return 0;
}

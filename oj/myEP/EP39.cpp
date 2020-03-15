/*************************************************************************
	> File Name: EP39.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月09日 星期四 22时00分14秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define max 1000
int num[max + 5] = {0};

int gcd(int a, int b) {
	return b ? (b, a % b) : a;

}

int main() {
	for(int i = 1; i <= 33; i++) {
		for(int j = i + 1; j <= 33; j++) {
		if(gcd(i, j) != 1)continue;
		int a = j * j - i * i;
		int b = 2 * j * i;
		int c = j * j + i * i;
		for(int k = (a + b + c); k <= max; k += (a + b + c)) {
			num[k] += 1;
		}
		
		
		}
	}
	int ans = 0;
	int d = 0;
	for(int i = 0; i <= max; i++) {
		if(num[i] > ans) {
			
			ans = num[i];
			d = i;

		}
	}
	cout << d << endl;
	return 0;
}

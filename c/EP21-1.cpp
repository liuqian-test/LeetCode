/*************************************************************************
	> File Name: EP21-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 18时30分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 10000

int f[max + 5] = {0};
void init() {
	for(int i = 2; i <= max; i++) {
		for(int j = 1; j * j <= i; j++) {
			if(i % j) continue;
			f[i] += j;
			f[i] += i / j;
		}
		f[i]-= i;
	}
	return ;
}
int main() {
	init();
	long long sum = 0;
	for(int i = 2; i < max; i++) {
		if(f[i] != i && f[i] < max && i == f[f[i]]) {
		sum += i;
		}
	} 
	cout << sum <<endl;
	return 0;
}

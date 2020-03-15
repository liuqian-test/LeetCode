/*************************************************************************
	> File Name: EP10.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月05日 星期日 14时26分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 2000000

int prime[max + 5] = {0, 1, 0};

void init() {
	long long  sum = 0;
	for(int i = 2; i <= max; i++) {
		if(!prime[i]) {
		   prime[++prime[0]] = i;	
			sum += i;
		}
		for(int j = 1; j <= prime[0]; j++) {
		if(prime[j] * i > max) break;
		prime[prime[j] * i] = 1;
		if(i % prime[j] == 0) break;
		}
	}
	cout << sum << endl;
	return ;
}
int main() {
	init();
	return 0;
}

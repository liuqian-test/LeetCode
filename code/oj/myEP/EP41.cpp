/*************************************************************************
	> File Name: EP41.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月09日 星期四 22时29分41秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define max  999999999LL

long long prime[max + 5] = {0};
int num[10] = {0};


void init() {
	for(long long i = 2; i <= max; i++) {
		if(!prime[i]) prime[++prime[0]] = i;
		for(long long j = 1; j <= prime[0]; j++) {
		if(prime[j] * i > max) break;
		prime[prime[j] * i] = 1;
		if(i % prime[j]) break;
		}
	}
	return ;
}

int is_val(long long n) {
	memset(num, 0, sizeof(num));
	long long m = 0;
	while(n) {
	m = n % 10;
	n /=10;
	if(m == 0 || num[m])return 0;
	num[m] = 1;
	}
	return 1;
}

int main() {
	init();
	long long ans = 0;
	for(long long i = 1; i <= max; i++) {
		if(is_val(prime[i]) && prime[i] > ans) ans = prime[i]; 
	}

	cout << ans << endl;
	return 0;
}

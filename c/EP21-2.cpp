/*************************************************************************
	> File Name: EP21-2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 19时14分15秒
 ************************************************************************/

#include<iostream>
#include  <cmath>
using namespace std;
#define max 4000000

int prime[max + 5] = {0};
int f[max + 5] = {0};
int cnt [max + 5] = {0};
void init() {
	for(int i = 2; i <= max; i++) {
		if(!prime[i]) {	
			prime[++prime[0]] = i;
			f[i] = i + 1;
			cnt[i] = i * i;
		}
		for(int j = 1; j <= prime[0]; j++){
			if(prime[j] * i > max) break;
			prime[prime[j] * i] = 1;
			if(i % prime[j == 0]){
			f[i * prime[j]] = f[i] * (cnt[i] * prime[j] - 1) / (cnt[i] - 1);
			cnt[i * prime[j]] = cnt[i] * prime[j];
			break;
			}else {
			f[i * prime[j]] = f[i] * f[prime[j]];
			cnt[i * prime[j]] = prime[j] * prime[j];
			}
		} 
	}
		return ;
}
int main() {
	long long sum = 0;
	init();
	for(int i = 2; i < max; i++) {
		f[i] -= i;
	} 
	for(int i =2; i < max; i++) {
		if(f[i] != i && f[i] < max && f[f[i]] == i) sum += i;
	}
	cout << sum << endl;
	return 0;
}

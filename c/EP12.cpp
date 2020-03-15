/*************************************************************************
	> File Name: EP12.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月26日 星期四 19时48分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int f[max + 5];
int prime[max + 5];
int cnt[max + 5];

int prime[max + 5] = {0};
void init() {


	for(int i = 2; i < max ;i++) {
		if(!prime[i]) {	
			prime[++prime[0]] = i;
			f[i] = 1;
		}
		for(int j = 0; j <= prime[0]; j++) {
		if(prime[j] * i > max) break;
		prime[prime[j] * i] = 1;
		if(i % prime[j] == 0) {
			f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
			cnt[i * prime[j]] = cnt[i] + 1; 
			break;
		} else {
			f[prime[j] * i] = f[prime[j]] * f[i];
			cnt[prime[j] * i] = 1;
		}
		}
	}
	return ;
}

int main() {
	init();
   for(int i = 2; i < 100; i++) {
	   cout
   
   }
	return 0;
}

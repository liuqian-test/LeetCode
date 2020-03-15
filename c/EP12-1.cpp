/*************************************************************************
	> File Name: EP12-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月26日 星期四 20时40分14秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int f[max + 5];
int cnt[max + 5];

int prime[max + 5] = {0};
void init() {


	for(int i = 2; i <= max ;i++) {
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
	int n = 0, fac = 0;
   while(fac < 500) {
	   n += 1;
	   if(n & 1){
	 fac = f[n] * f[(n + 1) >> 1];
	   } else {
	 fac = f[n >> 1] * f[n + 1];
	   
	   }
   }
   cout << n * (n + 1) / 2 << endl;
	return 0;
}


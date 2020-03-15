/*************************************************************************
	> File Name: EP12.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月05日 星期日 19时40分46秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 10000000

int prime[max + 5] = {0};
int f[max + 5] = {0};
int cnt[max + 5] = {0};

void init() {
	for(int i = 2; i <= max; i++) {
		if(!prime[i]) {
		f[i] = 2;
		cnt[i] = 1;
		prime[++prime[0]] = i;
		}

		for(int j = 1; j <= prime[0]; j++) {
			if(prime[j] * i > max) break;
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0) {
			f[prime[j] * i] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
			cnt[prime[j] * i] = (cnt[i] + 1);
			
			} else {
			f[i * prime[j]] = f[i] * f[prime[j]];
			cnt[i * prime[j]] = 1;
			}
		}
	}

	return ;
}


int main() {
	init();
	int i = 0;
	while(1) {
	 i += 1;
	if(f[i] >= 500) {
	cout << i << endl;
	return 0;
	}
	}
	return 0;
}

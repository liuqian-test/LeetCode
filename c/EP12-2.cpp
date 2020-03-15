/*************************************************************************
	> File Name: EP12-2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月03日 星期五 20时31分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000

int prime[max + 5] = {0};
int f[max + 5] = {0};
void init() {

	for(int i = 2; i <= max; i++) {
		for(!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = 2;
		}
		for(int j = 1; j <= prime[0]; j++) {
			if(prime[j] * i > max) break;
			prime[prime[j] * i] = 1;
		if(i % prime[j] == 0) {
			 
			break;
		} else {
			f[i * prime[j]] = f[i] * f[prime[j]];
		}
		
    	}
	}

}

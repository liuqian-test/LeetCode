/*************************************************************************
	> File Name: EP47-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月03日 星期五 10时51分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int prime[max + 5] = {0};
int is_prime[max + 5] = {0};

void init() {
	for(int i = 2; i  <= max; i++) {
		if(prime[i]) continue;
		for(int j = i; j <= max; j += i) {
			prime[j] += 1;
		}
	}
}

int main() {
	init();
	for(int i = 2; i <= max; i++) {
		int flag = 1;
		for(int j = 0; j < 4 && flag; j++) {
	    flag = (prime[j + i]) == 4;
		}
	    if(flag){
		cout << i << endl;
		break;
		}
	}


	return 0;
}

/*************************************************************************
	> File Name: EP37.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月08日 星期三 20时32分28秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max 1000000

int prime[max + 5] = {0, 1, 0};
int is_prime[max + 5];

void init() {
	for(int i = 2; i < max; i++) {
	if(!prime[i])is_prime[++prime[0]] = i;
	for(int j = 1; j <= prime[0]; j++) {
		if(is_prime[j] * i  > max) break;
		prime[is_prime[j] * i] = 1;
		if(i % is_prime[j] == 0) break;
	}
}
}
int digit(int n) {
	return floor(log10(n));
}

int is_val(int n) {
	if(n < 10) return 0;
	int d = digit(n);
	int num = n;
	int num1 = n;
	while(num) {
	 num = num / 10;
//	 cout << num << endl;
	 if(num && prime[num])return 0;
	}    

	while(d > 0) {
		int y = pow(10, d);
	    num1 = num1 % y;
		if(prime[num1])return 0;
		d -= 1;
	} 
	return 1;
}

int main() {
	init();
	int flag = 11;
	//cout << is_prime[1] << "  " <<is_prime[3] << endl;
	int i = 1;
	int sum = 0;
//int h =	is_val(37);


	while(flag) {
		int y = is_prime[i++];
	//	cout << y << endl;
		if(is_val(y)){

		cout << y << endl;
		sum += y;
		flag -= 1;
	}
		//flag -= 1;
	}  
	cout << sum << endl;
	return 0;
}

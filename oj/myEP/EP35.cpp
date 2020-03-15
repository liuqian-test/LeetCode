/*************************************************************************
	> File Name: EP35.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月08日 星期三 18时00分22秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
#define max 1000000
#define max1 9999999

int prime[max1 + 5] = {0, 1, 0};
int is_prime[max1 + 5];
void init() {
	for(int i = 2; i < max1; i++) {
		if(!prime[i])is_prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; j++) {
			if(is_prime[j] * i > max) break;
			prime[is_prime[j] * i] = 1;
			if(i % is_prime[j] == 0) break;
		}
	}
	return ;
}

int digit(int n) {
	return floor(log10(n));
}

int is_val(int n) {
	if(n < 10)return 1;
	int d = digit(n);
//	cout << d << endl;
	int num = n;
	int m = 0;
	int k = pow(10,d);
	while(d) {
		d -= 1;
		num = (num % k) * k + num / k ;
		if(prime[num]) return 0;
		prime[num] = 1;
			//cout <<  num <<endl;	
	}
	return 1;

}

int main() {
	init();
    int	sum = 1;
	for(int i = 1; i < max; i += 2) {
		if(!prime[i] && is_val(i)) sum += 1;
	}
	cout << sum << endl;
	return 0;
}

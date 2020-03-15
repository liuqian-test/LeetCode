/*************************************************************************
	> File Name: EP35-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 19时31分46秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define max 1000000

int prime[max + 5] = {0};
int is_prime[max + 5] = {1, 1, 0};

void init() {
	for(int i = 2; i <= max; i++){
		if(!is_prime[i])prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; j++) {
		if(prime[j] * i >= max) break;
		is_prime[prime[j] * i] = 1;
		if(i % prime[j] == 0) break;
		}
	}
}
int is_val(int n) {
	int x = n;
	int wq = pow(10, floor(log10(n)));
	int digit = floor(log10(n)) + 1;
	for(int i = 0; i < digit; i++) {
		 x = x / 10 + (x % 10) * wq;
		if(x < max && is_prime[x] != 0) return 0;
}
	return 1;
}

int solve() {
	int sum = 0;
	for(int i = 1; i <= prime[0]; i++) {
		if(!(is_val(prime[i]))) continue;
		sum++;
	}
	return sum;
}
int main() {
	init();
	int sum = solve();
	printf("%d\n", sum);
	return 0;
}

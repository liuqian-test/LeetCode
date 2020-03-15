/*************************************************************************
	> File Name: EP46-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月02日 星期四 22时25分56秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max 1000000

int is_prime[max + 5] = {1, 1, 0};
int prime[max + 5] = {0};

void init() {
	for(int i = 2; i <= max; i++) {
	  if(!is_prime[i]) prime[++prime[0]] = i;
	  for(int j = 1; j <= prime[0]; j++ ) {
	  if(prime[j] * i > max) break;
	  is_prime[prime[j] * i] = 1;
	  if(i % prime[j] == 0) break;
	  }
	}
}

int func(int n) {
	return 2 * n * n;
}

int search(int (*f)(int), int l, int r, int x) {
	int mid;
	while(l <= r) {
	mid = (l + r) >> 1;
	if(f(mid) == x) return 1;
	if(f(mid) < x) l = mid + 1;
	else r = mid - 1;
	}
 return 0;
}

int is_val(int x) {
	for(int i = 1; i <= prime[0] && prime[i] < x; i++) {
	  int val = x - prime[i];
	  if(search(func, 1, val, val)) return 1;
	}
return 0;
}

int main() {
 init();
 int ans = 0;
for(int j = 9; j <= max; j += 2) {
	if(!is_prime[j]) continue;
	if(is_val(j)) continue;
	cout << j << endl;
	break;
 }

// cout << "kkk"  << endl;
	return 0;
}

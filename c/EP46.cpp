/*************************************************************************
	> File Name: EP46.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 16时09分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int prime[max + 5] = {0};
int is_prime[max + 5] = {0};
void init() {
	for(int i = 2; i <= max; i++) {
		if(!(is_prime[i])) prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; j++) {
			if(prime[prime[j] * i] > max) break;
			is_prime[prime[j] * i] = 1;
			if(i % prime[j] == 0) break;
		}
	}
	return ;
}

int is_sqrt(int n) {
	return 2 * n * n;
}

int search(int (*func)(int), int l, int r, int x) {
	int mid;
	while(l <= r){
     mid = (r + l) >> 1;
	if(func(mid) == x) return true;
	if(func(mid) < x) l = mid + 1;
	else r = mid - 1;
	}
	return 0;
}
int main() {
	init();
	int ans = 0;
	for(int i = 9; i <= max; i += 2) {
		if(!is_prime[i]) continue;
		int flag = 0;
		for(int j = 1; j <= prime[0] && prime[j] < i;  j++) {
			if(search(is_sqrt , 1, i - prime[j], i - prime[j])) {
			
				flag = 1;
				break;
			}	
		}
		if(flag) continue;
		ans = i;
		break;
	}
	cout << ans << endl;
	return 0;
}

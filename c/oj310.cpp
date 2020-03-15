/*************************************************************************
	> File Name: oj310.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 14时07分20秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000
int prime[max + 5];
int prime1[max + 5] = {0};
void init(int n) {
	for(int i = 2; i <= n; i++) {
		if(!(prime[i])) prime[++prime[0]] = i;
		for(int j = 1; j < prime[0]; j++) {
			if(prime[prime[j] * i] > n) break;
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0) break;
		}
	}

}

int main() {
	
    int n;
	cin >> n;
	init(n);
//	ans = 1;
	int k = 0,t = 0;
	for(int i = 2; i <= n; i++) {
	for(int j =1; j <= prime[0]; j++) {
		int temp = i;
	while(temp % prime[j] == 0) {
	 temp = temp / prime[j];
	 prime1[prime[j]] += 1;
	}
//	printf("%d %d\n",prime[j],k);
	}	
	}
 for(int i = 1; i <= n; i++) {
	if(prime1[i]) cout << i <<" " << prime1[i] << endl;
 
 }

	return 0;
}

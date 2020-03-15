/*************************************************************************
	> File Name: oj53.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 20时12分32秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000
int prime[max + 5] = {0};
int f[max + 5] = {0};
int cnt[max + 5] = {0};
void init(){

	for(int i = 2; i <= max; i++) {
		if(!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = i + 1;
			cnt[i] = i * i;
		}
		for(int j = 1; j <= prime[0]; j++) {
			if(prime[prime[j] * i] > max) break;
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0){
			
			}else {
			f[i * prime[j]] = f[i] * f[prime[j]] 			
			}
		}

		
	
	}


}

int main() {


	return 0;
}

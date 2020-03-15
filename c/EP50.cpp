/*************************************************************************
	> File Name: EP50.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月01日 星期三 21时56分18秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int prime[max + 5] = {1, 1, 0};

void  init() {
	for(int i = 2; i <= max; i++) {
	if(!prime[i]) prime[++prime[0]] = i;
	for(int j = 1; j <= prime[0]; j++) {
	if(prime[j] * i > max) break;
	prime[prime[j] * i] = 1;
	if(i % prime[j] == 0) break;
	
	}
}

}

int main() {



	return 0;
}

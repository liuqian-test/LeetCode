/*************************************************************************
	> File Name: EP07.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 21时37分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 200000

int prime[max + 5];

void init() {
	for(int i = 2; i <= max; i++) {
		if(!prime[i]) prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; j++) {
			if(prime[j] * i > max) break;
			prime[prime[j] * i] = 1;
			if(i % prime[j] == 0) break;
		}
	}
    return ;
}
int main() {
	init();
    cout << prime[10001] << endl;
	return 0;
}

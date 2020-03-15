/*************************************************************************
	> File Name: EP07.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月17日 星期二 16时44分31秒
 ************************************************************************/
#include <stdio.h>
#define MAX 2000000

int prime[MAX + 5] = {0};

void init() {
	for(int i = 2; i <= MAX; i++) {
		if(!prime[i]) prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; j++) {
		if(prime[j] * i > MAX) break;
		prime[prime[j] * i] = 1;
		if(i % prime[j] == 0) break;
		}
	}
}
int main() {
	init ();
	printf("%d", prime[10001]);
	return 0;
}

/*************************************************************************
	> File Name: EP10.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月17日 星期二 18时01分42秒
 ************************************************************************/
#include <stdio.h>
#define MAX 2000000
long prime[MAX + 5];

void init() {
	for(long i = 2; i * i < MAX; i++) {
	  for(long j = i; j * i < MAX; j++){
	   prime[i * j] = 1;
	  }
	}
}
int main() {
	init();
	long sum = 0;
	for(long i = 2; i < MAX; i++) {
		if(!prime[i]) sum += i;
	}
	printf("%ld\n", sum);
	return 0;
}

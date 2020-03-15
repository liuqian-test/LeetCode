/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: xainxing.cpp
*       &Created Time: 20Century 2020年03月13日 星期五 00时11分19秒 
*                          CST  Day/073 and Week/10 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#define max_n 1000 

int prime[max_n + 5] = {0};

int main() {
	int ans = 0;
	for(int i = 2; i <= max_n; i++) {
		if(!prime[i]) prime[++prime[0]] = i, ans += i;
		for(int j = 1; j <= prime[0]; j++) {
		if(i * prime[j] > max_n) break;
		prime[i * prime[j]] = 1;
		if(i % prime[j] == 0) break;
		}
	}
	printf("%d\n", ans);
	return 0;
}

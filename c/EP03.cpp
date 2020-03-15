/*************************************************************************
	> File Name: EP03.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 16时36分36秒
 ************************************************************************/
#include <stdio.h>
#define N 1000

int main() {
	long long ans = 0, M = N;
	long long i = 2;
	while (i * i <	M){
		if (M % i == 0) ans = i; //ans一定是素因子
		printf("ans  %d\n",ans);
		while (M % i == 0) M /= i;
		i += 1;
	
	}
	if (M > 1) ans = M;
	printf("M = %d\n",ans); //这一行是有必要的
//	printf("an = %lld\n", ans);
	return 0;
}

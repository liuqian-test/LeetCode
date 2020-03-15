/*************************************************************************
	> File Name: EP34.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 20时02分26秒
 ************************************************************************/
#include <stdio.h>
#define max 2903040

int is_val(int n){
	if(n == 1) {
	//	printf("%d\n",5);
		return n;}
	return is_val(n - 1) * n;
}
int main() {
	int sum = 0,sum1 = 0;
	for(int i = 3; i <= max; i++) {
		int x = i;
		while(x){
	    sum += is_val(x % 10);
		x /= 10;
		}
	if(sum == i) sum1 += i;
	}
  //  printf("%d", sum1);
	return 0;
}

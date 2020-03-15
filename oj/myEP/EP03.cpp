/*************************************************************************
	> File Name: EP03.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 19时28分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 600851475143LL

int main() {
	long long i = 2, ans = 0, N = max;
	while(i * i < N) {
	   if(N % i == 0) ans = i;
	   while(N % i == 0) N /= i; 
		i += 1;
	}
	if(N != 1) ans = N;
	cout << ans << endl;
	return 0;
}

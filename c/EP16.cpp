/*************************************************************************
	> File Name: EP16.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月28日 星期六 15时53分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 400

int ans[max + 5] = {4, 1, 0};
int main() {
	for(int i = 0; i < 100; i++) {
		for(int j = 1; j <= ans[0]; j++ )  ans[j] *= 1024;
		for(int k = 1; k <= ans[0]; k++) {
			if(ans[k] < 10) continue;
			ans[k + 1] += ans[k] / 10;
			ans[k] %= 10;
			ans[0] += (k == ans[0]);
			cout << ans[0] << endl;
		}
	}
	int sum = 0;
	for(int i = 1; i <= ans[0]; i++) {
		sum += ans[i];
	
	}
	 cout << sum <<"   " <<ans[0] << endl;


	return 0;
}

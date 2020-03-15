/*************************************************************************
	> File Name: EP39.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 15时09分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000

int cnt[max + 5];
int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}


int main() {
	int ans = 0;
	int i;
	for(int n = 1; n <= 33; n++) {
		for(int m = n + 1; m <= 33; m++) {
			if(gcd(n, m) == 1){
			int a = m * m - n * n;
			int b = 2 * m * n;
			int c = m * m + n * n;
			i = 0;
			for(i = (a + b + c); i <= 1000; i += (a + b + c) ){
			    cnt[i] += 1;
			}
			}
		  
		}
	}

  for(int j = 1; j <= max; j++) {
  if(cnt[j] > ans){
	ans = j;
  }
  }
   cout << ans << endl;
	return 0;
}

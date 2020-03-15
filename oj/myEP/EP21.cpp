/*************************************************************************
	> File Name: EP21.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 15时12分56秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max 10000

int num[max + 5];
void is_val() {
  //:   memset(num, 1, sizeof(num));
	for(int i = 2; i < max; i++) {
		for(int j = i + i ; j  < max; j += i) {
		    num[j] += i; 
		}
	}

}
int main() {
	is_val();
	int ans = 0;
	for(int i = 2; i < max; i++) {
		int k = num[i] + 1;
		if(k > max) continue;
		int k1 = num[k] + 1;
		if(i == k1 && i != k) {
			num[i] = -1;
			ans += (i + k);
		}
}

cout << ans << endl;
	return 0;
}

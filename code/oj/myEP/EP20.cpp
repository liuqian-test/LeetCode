/*************************************************************************
	> File Name: EP20.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 15时00分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 220

int num[max +  5] = {1, 1, 0};

void init(){
	for(int i = 2; i <= 100; i++) {
		 for(int j = 1; j <= num[0]; j++) num[j] *= i;
		 for(int k = 1; k <= num[0]; k++) {
			if(num[k] < 10) continue;
			num[k + 1] += num[k] / 10;
			num[k] %= 10;
			num[0] += (num[0] == k);
		 }
	}
		return ;
}

int main() {
init();
long long  ans = 0;
for(int i = 1; i <= num[0]; i++) {
	ans += num[i];
}

	cout << ans << endl;
	return 0;
}

/*************************************************************************
	> File Name: EP13.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月05日 星期日 20时08分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

char num[55] = {0};
int ans[55] = {0};


int main() {
	int p = 50;
	for(int i = 1; i <= 100; i++) {
		  cin >> num;
	
	//cout << num << endl;
     
	for(int j = 1; j <= 50; j++) {
		ans[j] += num[50 - j] - '0';
	}
	for(int k = 1; k <= p; k++) {
		if(ans[k] < 10) continue;
		ans[k + 1] += ans[k] / 10;
		ans[k] %= 10;
	     p += (p == k);
	}
	}

for(int i = p; i > p - 10; i--) {
	cout << ans[i];
}
cout << endl;


	return 0;
}

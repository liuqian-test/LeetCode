/*************************************************************************
	> File Name: 186.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 21时54分28秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define MAX 100000

int main() {
	int n, m[MAX + 5];
	cin >> n;
	cin >> m;
	int ans = 0;
	for(int i = 0; i < n; i += m[i]) {
		ans += 1;
	}
	cout << ans << endl;
	return 0;
}

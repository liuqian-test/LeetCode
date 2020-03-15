/*************************************************************************
	> File Name: EP11-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 11时56分38秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max 55


char num[max + 5];
int ans[max + 5] = {0};

int main() {
for(int i = 0; i < 100; i++) {
	scanf("%s", num);
	int k = strlen(num);
	if(k > ans[0]) ans[0] = k;
	for(int j = 1; j <= k; j++) {
    ans[j] += (num[k - j] - '0');
	}
	
	for(int j = 1; j <= ans[0]; j++) {
		if(ans[j] < 10) continue;
		ans[j + 1] += ans[j] / 10;
		ans[j] %= 10;
		ans[0] += (j == ans[0]);
	}
}
for(int i = ans[0]; i > ans[0] - 10; i--) {
	cout << ans[i];

}
cout << endl;
	return 0;
}

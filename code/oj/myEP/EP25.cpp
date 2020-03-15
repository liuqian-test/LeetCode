/*************************************************************************
	> File Name: EP25.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 22时18分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int num[3][max + 5];

int init() {
	int ans = 0;
    num[1][1] = 1; num[2][1] = 1;
	num[1][0] = 1; num[2][0] = 1;
	int i = 2;
	while(num[i % 3][0] < 1000) {
		i += 1;
		num[i % 3][0] = num[(i - 1) % 3][0];
		for(int j = 1; j <= num[i % 3][0]; j++) {
			num[i % 3][j] = num[(i - 1) % 3][j] + num[(i - 2) % 3][j];
		}

		for(int j = 1; j <= num[i % 3][0]; j++) {
			if(num[i % 3][j] < 10) continue;
			num[i % 3][j + 1] += num[i % 3][j] / 10;
			num[i % 3][j] %= 10;
			num[i % 3][0] += (j == num[i % 3][0]);
		}
	}
	return i;
}

int main() {
int ans = init();
cout << ans << endl;


	return 0 ;
}

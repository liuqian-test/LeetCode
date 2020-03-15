/*************************************************************************
	> File Name: EP02.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 18时14分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 4000000

long long  num[3];

int main() {
	long long  sum = 2;
	num[1] = 1; num[2] = 2;
	for(int i = 3; num[(i - 1) % 3] + num[(i - 2) % 3] <= max; i++) {
		num[i % 3] = num[(i - 1) % 3] + num[(i - 2) % 3];
		if(num[i % 3] & 1) continue;
		sum += num[i % 3];
		}
	
	cout << sum << endl;
	return 0;
}

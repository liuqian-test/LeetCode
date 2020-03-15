/*************************************************************************
	> File Name: EP20-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月01日 星期三 19时52分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 220

int num[max + 5] = {1, 1, 0}; 

int main() {
	for(int i = 2; i <= 100; i++) {
		for(int j = 1; j <= num[0]; j++) num[j] *= i;
		 for(int k = 1; k <= num[0]; k++) {
			if(num[k] < 10) continue;
			num[k + 1] += num[k] / 10;
			num[k] %= 10;
			num[0] += (k == num[0]);
		 }
}
	int sum = 0;
	for(int j = 1; j <= num[0]; j++) {
	 sum += num[j];
	}

	cout << sum << endl;
	return 0;
}

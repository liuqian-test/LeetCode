/*************************************************************************
	> File Name: EP29.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月29日 星期日 14时16分36秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

#define max_n 10000
#define max_m 210

int result[max_n + 5][max_m];
int result_len = 0;

int find_result(int *num) {
	for(int i = 0; i < result_len; i++) {
		if(memcmp(result + i, num, sizeof(int) * max_m) == 0) {
			return i + 1;
		}
	}
	return 0;
}

int main() {
	for(int i = 2; i <= 100; i++) {
		for(int j = 2; j <= 100; j++) {
			int temp[max_m] = {1, 1, 0}; 
			for(int k = 0; k < j; k++) {
			for(int a = 1; a <= temp[0]; a++) temp[a] *= i;
			for(int b = 1; b <= temp[0]; b++) {
				if(temp[b] < 10) continue;
				temp[b + 1] += temp[b] / 10;
				temp[b] %= 10;
				temp[0] += (b == temp[0]);
			}
			}
			if(find_result(temp) == 0) {
			memcpy(result + result_len, temp, sizeof(int)*max_m);
			result_len += 1;
			}
		}
	
	}
	cout << result_len << endl;
	return 0;
}

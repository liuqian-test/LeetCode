/*************************************************************************
	> File Name: EP29-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月02日 星期四 17时13分32秒
 ************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
#define max 10000
#define digit 210

int result[max + 5][digit + 5];
int result_len = 0;

int find(int *num) {
	for(int i = 0; i < result_len; i++) {
	    if(memcmp(result + i, num, sizeof(int) * digit) == 0) {
		return i + 1;
		}
	}
	return 0;
}

int main() {
	for(int a = 2; a <= 100; a++) {
		for(int b = 2; b <= 100 ; b++) {
			int temp[digit] = {1, 1, 0};
			for(int k = 0; k < b ; k++) {
				 for(int j = 1; j <= temp[0]; j++) temp[j] *= a;
				 for(int j = 1; j <= temp[0]; j++) {
					 if(temp[j] < 10) continue;
					temp[j + 1] += temp[j] / 10;
					temp[j] %= 10;
					temp[0] += (j == temp[0]);
				 }	
			}
			if(find(temp) == 0){
			memcpy(result + result_len, temp, sizeof(int) * digit);
			result_len += 1;
			
			}
		}
	}
	cout << result_len << endl;
	return 0;
}

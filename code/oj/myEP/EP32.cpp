/*************************************************************************
	> File Name: EP32.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月08日 星期三 13时23分44秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
#define max 10000

int result[max + 5] = {0};
int num[10] = {0};

int digit(int n) {
	return (floor(log10(n)) + 1);
}

int showdi(int n) {

while(n) {
	num[0] = 1;
	if(num[n % 10])return 0;
	num[n % 10] = 1;
	n /= 10;
}
	return 1;
}

int is_val(int i, int j) {

	memset(num, 0, sizeof(num));
    
	if(digit(i) + digit(j) + digit(i * j) - 9) return 0;
	int ans = i * j;
	int flag = 1;
	flag = flag * showdi(i);
	flag = flag * showdi(j);
	flag = flag * showdi(i * j);
	if(flag)return 1;
	return 0;

} 

int main() {
	int sum = 0;
	for(int i = 1; i <= max; i++) {
		for(int j = i ; j * i < max; j++) {

		if(is_val(i, j)) {
			if(result[i * j])continue;
			result[i * j] = 1;
			cout << i << " " << j <<" " << i * j << endl;
			sum += i * j;

		}
		}
	}

	cout << sum << endl;
	return 0;
}

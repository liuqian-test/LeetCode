/*************************************************************************
	> File Name: EP30.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月07日 星期二 22时36分56秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max 1000000

int is_val(int n) {
	int num = n;
	int m = 0;
	while(num) {
	m += pow((num % 10), 5);
	num /= 10;
	}
	 if(m == n)return 1;
	 return 0;

}


int main() { 
	int ans = 0;
	for(int i = 2; i < max; i++) {
	if(is_val(i))ans += i;
}
	cout << ans << endl;
	return 0;
}

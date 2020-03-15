/*************************************************************************
	> File Name: EP04.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 18时06分50秒
 ************************************************************************/
#include <stdio.h>
//三位数的乘积组成的最大回文数
bool is_val(int i, int base) {
	int x = i, temp = 0;
	while(x) {
		temp = temp * 10 + x % 10;
		x /=10;
	}
	return i == temp;

}
int main() {
	int ans = 0;
	for(int i =100; i < 1000; i++) {
		for(int j = i; j < 1000; j++) {
		 if(is_val(i * j, 10) && ans < i * j) ans = i * j;
		}
	}
		printf("%d", ans);
	return 0;
}

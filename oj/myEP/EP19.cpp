/*************************************************************************
	> File Name: EP19.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月10日 星期五 18时41分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int y, int m, int d ) {
	if(m == 1 || m == 2) {
		y -= 1;
		m += 12;
	}
	int w = 0;
	w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + 
		y / 400) % 7;
	return w;
}

int main() {
	int ans = 0;
	for(int y = 1901; y <= 2000; y++) {
		for(int m = 1; m <= 12; m++) {
			if(is_val(y, m, 1) == 6) ans += 1;
		}
	}
	cout << ans << endl;
	return 0;
}

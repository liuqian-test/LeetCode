/*************************************************************************
	> File Name: 55.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月10日 星期五 10时59分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int y, int m, int d) {
	if(m == 1 || m == 2) {
     y -= 1;
	 m += 12;
	}
   int w;
   w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 
	    + y / 400) % 7;
	return w;
}

int main() {
	int ans = 0;
	int y1, m1, d1;
	int y2, m2, d2;
	cin >> y1 >> m1 >> d1;
	cin >> y2 >> m2 >> d2;
	for(int i = y1 + 1; i <= y2 - 1; i++) {
		for(int j = 1; j <= 12; j++) {
		if(is_val(i, j, 6) == 5) ans++;
		}
	}

	for(int i = m1; i <= 12; i++) {
		if(d1 < 6) {
			d1 = 6;
			continue;
		}
		if(is_val(y1, i, 6) == 5) ans++;
	}

	for(int i = 0; i <= m2; i++) {
		if(i == m2 && d2 < 6) break;
		if(is_val(y2, i, 6) == 5) ans++;
	
	}

	return 0;
}

/*************************************************************************
	> File Name: EP11.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月05日 星期日 14时42分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 20

int num[25][25];

int fx[4][2] = {
	{-1, 1}, {-1, 0}, {-1, 1}, {0, 1}
};

int cale(int x, int y) {
	int ans = 0;
	for(int k = 0; k < 4; k++) {
		int p = 1;
	 for(int step = 0; step < 4; step++) {
	 int dx = x + step * fx[k][0];
	 int dy = y + step * fx[k][1];
	 if(dx < 0 || dx > max) break;
	 if(dy < 0 || dy > max) break;
		p *= num[dx][dy];
	 }
	 if(p > ans) ans = p;
	}
	return ans;
}

int main() {
	int ans = 0;
	for(int i = 0; i < 20; i++) {
		for(int j = 0; j < 20; j++) {
		cin >> num[i][j];
		}
	}
	for(int j = 0; j < 20; j++) {
		for(int i = 0; i < 20; i++) {
			int p = cale(i, j);
		   if(p > ans) ans = p;
		}
	}
	cout << ans << endl;

	return 0;
}

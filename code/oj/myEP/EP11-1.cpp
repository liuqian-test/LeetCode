/*************************************************************************
	> File Name: EP11-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 12时54分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 20

int dir[4][2] = {
	{-1,-1}, {-1,0}, {-1,1}, {0,1}
};

int num[max + 5][max + 5];

int is_val(int x, int y) {
	int ans = 0;
	for(int d = 0; d < 4; d++) {
		int p = 1;
	   for(int s = 0; s < 4; s++) {
			int dx = x + s * dir[d][0];
			int dy = y + s * dir[d][1];
			if(dx < 0 || dx > 20) break;
			if(dy < 0 || dy > 20) break;
			p *= num[dx][dy];
		}
	   if(p > ans) ans = p; 
	}
   return ans;
}




int main() {
for(int i = 1; i <= 20; i++) {
	for(int j = 1; j <= 20; j++) {
	cin >> num[i][j];
	}
}
int ans = 0;
for(int i = 1; i <= 20; i++) {
	for(int j = 1; j <= 20; j++) {
	if(is_val(i, j) > ans) ans = is_val(i, j);
	}
}
	cout << ans << endl;

	return 0;
}

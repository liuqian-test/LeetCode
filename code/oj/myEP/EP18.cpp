/*************************************************************************
	> File Name: EP18.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 14时11分00秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 20

int num[max + 5][max + 5];
int keep[max + 5][max + 5];

int is_max(int x, int y) {
	if(x + 1 == max) return num[x][y];
	if(keep[x][y]) return keep[x][y];
	int dx = is_max(x + 1, y);
	int dy = is_max(x + 1, y + 1);
    return keep[x][y] = (dx > dy ? dx : dy) + num[x][y]; 
}


int main() {
for(int i = 1; i <= max; i++) {
	for(int j = 1; j <= i; j++) {
	cin >> num[i][j];
	}
}
	cout << is_max(0,0) << endl;
	return 0;
}

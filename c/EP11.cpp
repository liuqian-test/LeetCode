/*************************************************************************
	> File Name: EP11.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月19日 星期四 20时01分45秒
 ************************************************************************/
#include<stdio.h>
#define MAX 20
//深度广度搜索；
int num[MAX + 5][MAX + 5];
int fx[4][2] = {{-1,-1},{-1,0},{-1,1},{0,1}};

int getnum(int x, int y){
	int ans = 1;
	for(int i = 0; i <4; i++) {
		int p = 1;
	  for(int temp = 0; temp < 4; temp++) {
	    int dx = x + fx[i][0] * temp;
		int dy = y + fx[i][1] * temp;
	    if(dx < 0 || dx > MAX) break;
		if(dy < 0 || dy > MAX) break;
	     p *=num[dx][dy];
	  }
	  if(p > ans) ans = p;
	}
	return ans;
}
int main() {
	for(int i = 0; i < MAX; i++ ) {
		for(int j = 0; j < MAX; j++) {
		 scanf("%d", &num[i][j]);
		}
	}
	int ans = 0;
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j < MAX; j++) {
		int t = getnum(i, j);
		if(t > ans) ans = t;
		}
	}
	printf("%d", ans);
	return 0;
}


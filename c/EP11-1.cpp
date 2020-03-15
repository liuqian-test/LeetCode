/*************************************************************************
	> File Name: EP11-1.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月19日 星期四 20时36分28秒
 ************************************************************************/
#include<stdio.h>
#define max 10
// 计算客 “马走日”
 int arr[max + 5][max + 5];
 int dir[8][2] = {
	{-2,1},{-2,-1},{2,-1},{2,1},
	{-1,-2},{-1,2},{1,-2},{1,2}
 };

void dfs(int x, int y, int n, int m){
	if(x < 0 || x >= n || y < 0 || y >= m)return ;
	if(arr[x][y]) return ;
	if(cnt == n * m){
	  ans +=1;
	  return ;
	}
		arr[dx][dy] = 1;  
	for(int k = 0; k < 8; k++) {
		int dx = x + dir[k][0];
		int dy = y + dir[k][1];
		dfs(dx,dy,cnt + 1);  
		arr[dx][dy] = 0;  //回溯的过程
	}
}
int main() {
	int T,n,m,sx,sy;
	scanf("%d", &T);
	while(T--) {
		memset(arr,0,sizeof(arr));
		scanf("%d%d%d%d", &n, &m, &sx, &sy);
		int cnt = 1;
		dfs(sx,sy,cnt);
	}
	return 0;
}

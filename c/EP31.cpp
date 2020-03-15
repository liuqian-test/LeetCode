/*************************************************************************
	> File Name: EP31.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 14时46分14秒
 ************************************************************************/
#include <stdio.h>
#define maxn 8
#define maxm 200

int w[maxn + 5] = {1, 2, 5, 10, 20, 50, 100, 200};
int f[2][maxm + 5];
int main() {
	for(int i = 0; i < maxn; i++) {
		f[i % 2][0] = 1;
		for(int j = 1; j <= maxm; j++) {
			f[i % 2][j] = 0;
			if(i >= 1) f[i % 2][j] = f[(i - 1) % 2][j];
		    if(j >= w[i]) f[i % 2][j] +=  f[i % 2][j - w[i]];
		
		}
	}
	printf("%d\n", f[(maxn - 1) % 2][maxm]);
	return 0;
}

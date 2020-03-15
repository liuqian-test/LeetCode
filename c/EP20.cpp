/*************************************************************************
	> File Name: EP20.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 20时37分21秒
 ************************************************************************/
#include <stdio.h>
#define max 300
int ans[max + 5] = {1, 1, 0};

int main() {
	for(int i = 1; i <= 100; i++) {
		for(int j = 1; j <= ans[0]; j++) {
		 ans[j] *= i;
		}
		for(int k = 1; k <= ans[0]; k++) {
			if(ans[k] < 10) continue;
			ans[k + 1] += ans[k] / 10;
			ans[k] %= 10;
			ans[0] += (k == ans[0]);
		}
	}
	int sum = 0;
	for(int i = 1; i <= ans[0]; i++) {
	   sum += ans[i];
	}

	printf("%d", sum);
	return 0;
}

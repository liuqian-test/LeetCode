/*************************************************************************
	> File Name: EP13.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月21日 星期六 15时58分11秒
 ************************************************************************/
#include<stdio.h>
#include <string.h>
#define MAX 52
char str[MAX + 5] = {0};
int  ans[MAX + 5] = {0};


int main() {
	while(~scanf("%s",str)) {
	 int len = strlen(str);
	 if(len > ans[0]) ans[0] = len;
	for(int i = 0; i < len; i++) {
	  ans[len - i] += str[i] - '0';
	}
	for(int i = 1; i <= ans[0]; i++) {
		if(ans[i] < 10) continue;
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
		ans[0] += (i == ans[0]);
		}
	}
  for(int i = ans[0]; i > ans[0] - 10; i--) {
	printf("%d",ans[i]);
  }
	return 0;
}

/*************************************************************************
	> File Name: EP10-2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月19日 星期四 19时15分15秒
 ************************************************************************/
#include <stdio.h>
#define max 1000000
int num[max + 5] = {0};
void is_val(){
	for(int i = 2; i <= max; i++){
		for(int j = i; j * i < max; j++) {
		num[j * i] = 1;
		}
	}
}
int main() {
	int a, b;
	is_val();
	scanf("%d%d",&a, &b);
	for(int i = b; i <= a; i++){
		if(!num[i]) printf("%d\n",i);
	}
	return 0;
}

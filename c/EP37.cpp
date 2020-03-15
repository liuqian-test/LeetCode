/*************************************************************************
	> File Name: EP37.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 20时00分41秒
 ************************************************************************/
#include <stdio.h>
#define max 1000000

int num[max + 5];
int is_num[max + 5] = {1, 1, 0};

void init() {
    	for(int i = 2; i < max; i++) {
		for(int j = 2; j * i < max; j++) {
		num[i * j] = 1;
		}
	}
}



int main() {
init();
for(int i = ; i < ) {


}


return 0;
}

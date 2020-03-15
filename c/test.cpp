/*************************************************************************
	> File Name: test.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月16日 星期一 20时36分35秒
 ************************************************************************/
#include <stdio.h>
#define max 10000

int prime[max + 5] = {0};

int  init_prime() 
	prime[0] = 1, pime[1] = 1;
	for (int i = 2; i <= max; i++) {
		if(prime[i]) continue;
		for(int j = 2; j * i <= max; j++ ){
			prime[j * i]= 1;
		//	prime[0] = j;
}
}
// return prime[0];
}
int main () {
	int n;
	int n1 = init_prime();
	while(~scanf("%d", &n)) {
	 printf("%s\n", );
	}

	return 0;
}

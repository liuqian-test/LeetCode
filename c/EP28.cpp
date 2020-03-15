/*************************************************************************
	> File Name: EP28.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 19时11分52秒
 ************************************************************************/
#include <stdio.h>
int main() {
   int len = 3, sum = 1;
	while(len <= 1001) {
		sum += 4 * len *len - 6 * len + 6;
		len += 2;
	}
	printf("%d",sum);
	return 0;
}

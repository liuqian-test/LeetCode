/*************************************************************************
	> File Name: EP45.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月24日 星期二 15时44分08秒
 ************************************************************************/
#include <stdio.h>
typedef long long int1;
int1 Triangle(int1 n) {
	return n * (n + 1) / 2;
}

int1 pen(int1 n) {
	return n * (3 * n - 1) / 2;
}

int1 hex(int1 n) {
	return n * (2 * n - 1);
}

int search(int1 (*num) (int1), int1 n, int1 x) {
	int1 head = 0, tail = n, mid;
	while(head <= tail) {
		mid = (head + tail) >> 1;
		if(num(mid) == x) return mid;
		else if(num(mid)< x) head = mid + 1;
		else tail = mid -1;
	}
		return -1;
}

int main() {
	int1 n = 144;
	while(search(pen, 2 * n, hex(n)) == -1) n += 1;
	printf("%d", hex(n));

	return 0;
}

/*************************************************************************
	> File Name: EP44.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月24日 星期二 14时40分41秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
int pen (int n) {

	return n* (n * 3 - 1) / 2;
}

int search(int (*func)(int), int n, int x) {
	int head = 1, tail = n, mid;
	while(head <= tail) {
		mid = (head + tail) >> 1;
		if(func(mid) == x) return mid;
		else if(func(mid) < x )head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}
int main() {
	int n = 2, d = INT32_MAX;
	while(pen(n) - pen(n - 1) < d) {
		int pk = pen(n);
		for(int j = n - 1; j >= 1; j++) {
			int pj = pen(j);
			if(pk - pj >= d) break;
			int ind1 = search(pen,2 * n,pk + pj );
			int ind2 = search(pen, n,pk - pj);
			if(ind1 && ind2){
				d = pk - pj;
			}
		}
		n += 1;
	}
	printf("%d\n", d);
	return 0;
}


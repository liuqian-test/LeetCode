/*************************************************************************
	> File Name: EP33.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 18时09分20秒
 ************************************************************************/
#include <stdio.h>

int is_val(int x, int y) {
	int x1 = 1, x2 = 1, y1 = 1, y2 = 1;
	x1 = x % 10;
	x2 = x / 10;
	y1 = y % 10;
	y2 = y / 10; 
	if (!x1 || !x2 || !y1 || !y2) return 0;
    if (x1 == y1 && x2 * y == y2 * x && x2 != 0) return 1;
    if (x1 == y2 && x2 * y == y1 * x && x2 != 0) return 1;
    if (x2 == y2 && x1 * y == y1 * x && x1 != 0) return 1;
    if (x2 == y1 && x1 * y == y2 * x && x1 != 0) return 1;
	return 0;
}

int gcd(int a, int b) {

	return b ? gcd(b, a % b) : a;
}

int main() {
	int p1 = 1; int p2 = 1;
	for(int a = 1; a <= 100; a++) {
		for(int b = a + 1; b <= 100; b++) {
			if(!(is_val(a, b))) continue;
			p1 = p1 * a;
			p2 = p2 * b;
		}
	}
	int result = gcd(p1, p2);
	int re = (p2 / result);
	printf("%d\n", re);
	return 0;
}

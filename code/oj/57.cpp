/*************************************************************************
	> File Name: 57.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月10日 星期五 18时20分53秒
 ************************************************************************/

#include<iostream>
using namespace std;

int num(int n) {
	if(n <= 9) return n;
	n -= 10;
	int cur = 10, j = 2, num;
	while(n > 2 * (cur * 10 - cur)) {
		n -= 2 * (cur * 10 - cur);
		cur *= 10; j += 1;
	}
     num = n / j + cur;
	 for(int i = 0; i < j - n % j - 1; i++) {
		num /= 10;
	 }
	return num % 10;
}

int mian() {
	int x, y, z;
	int p = 1;
	p = num(x) * num(y) * num(z);
	cout << p << endl;
	return 0;
}

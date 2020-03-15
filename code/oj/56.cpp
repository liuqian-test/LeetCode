/*************************************************************************
	> File Name: 56.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 11时59分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 4000000

int jc[15] = {1};
int num[10] = {1};

void init(int x) {
	for(int i = 1; i <= x; i++) {
	jc[i] = i * jc[i - 1];
	num[i] = 1;
	}
}

int is_val(int k, int n) {
	int step = k / n;
	int t = 0;
	int i;
	for(i = 1; t <= step; i += (t <= step)){
		t +=jc[i];
	}
  num[i] = 0;
  cout << i;
  k %= n;
  return k;

}

int main() {
	int x, y;
	cin >> x >> y;
	init(x);
	int k = y - 1;
	for(int i = x - 1; i >= 1; i--) {
		k = is_val(k, jc[i]);
	
	}
	return 0;
}

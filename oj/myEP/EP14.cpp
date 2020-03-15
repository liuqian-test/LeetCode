/*************************************************************************
	> File Name: EP14.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月05日 星期日 21时31分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000000

int is_val(long long n, int i) {
    i += 1;
	if(n == 1) return i;
	if((n & 1)) return is_val(3 * n + 1, i);
	else return is_val(n >> 1, i);

}

int main() {
	int ans = 0;
	int d;
for(int i = 2; i <= max; i++) {
	int k = is_val(i, 0);
	if(k > ans) {
		ans = k;
		 d = i;
	}
}
cout << d << endl;
	return 0;
}

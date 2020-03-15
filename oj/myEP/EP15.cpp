/*************************************************************************
	> File Name: EP15.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 13时09分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
int n = 40, m = 20;
long long ans = 1;
while(m > 0) {
	if(n > 20)ans *= (n--);
    if(ans % m == 0) ans /= (m--);
}
	cout << ans << endl;
	return 0;
}

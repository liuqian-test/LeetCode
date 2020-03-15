/*************************************************************************
	> File Name: EP04.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 21时01分48秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int n) {
    int m = 0;
	int num = n;
	while(n) {
	m = m * 10 + n % 10;
	n /= 10;
	}
   if(m == num ) return num;
   return 0;

}

int main() {
int ans = 0;
for(int i = 999; i >= 100; i--){
	for(int j = 999; j >= 100; j--) {
		int k = is_val(i * j);
	if(k && k > ans ) ans = i * j;
	}
} 
	cout << ans << endl;
	return 0;
}

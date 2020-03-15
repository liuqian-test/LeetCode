/*************************************************************************
	> File Name: EP06.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 21时31分27秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
	int sum = 0;
	for(int i = 1; i <= 100; i++) {
	sum += i * i;
	}
   long long result = (5050 * 5050) - sum;
   cout << result << endl;
	return 0;
}

/*************************************************************************
	> File Name: EP09.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月05日 星期日 11时25分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
	for(int n = 1; n <= 33; n++) {
		for(int m = n + 1; m <= 33; m++) {
			int a = m * m - n * n;
			int b = 2 * m * n;
			int c = m * m + n * n;
			if((a + b + c) == 1000)cout << a * b * c << endl;
		}
	
	}
	return 0;
}

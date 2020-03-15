/*************************************************************************
	> File Name: EP28.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月07日 星期二 22时01分00秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int sum = 1;
int	i = 3;
	 while(i <= 1001) {
		
		for(int j = 0; j < 4; j++) {
			int k = pow(i, 2);
			sum += (k - j * (i - 1)); 
	    }
		i += 2;
	}
	cout << sum << endl;
	return 0;
}

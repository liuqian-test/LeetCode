/*************************************************************************
	> File Name: EP40.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月10日 星期五 14时56分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

int is_val(int n) {
	if(n <= 9) return n;
	 n-= 10;
	 int cur = 10, j = 2, num;
	 while(n > j * (cur * 10 - cur)){
		n -= j * (cur * 10 - cur);
		cur *= 10; j += 1;
	 }
	 num = n / j + cur;
	 for(int i = 0; i < j - n % j - 1; i++) num /= 10;
	 return num % 10;
}

int main() {
	int n = 7; 
	int sum = 1;
	int i = 1;
	while(n--) {
		sum *= is_val(i);
		i *= 10;
	}

	cout << sum << endl;
	return 0;
}

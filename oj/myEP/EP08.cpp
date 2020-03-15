/*************************************************************************
	> File Name: EP08.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 21时54分57秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

char num[1005];
int main() {
	long long  ans = 1;
	long long result = 0;
	int zero = 0;
	int len = 0;
	while(~scanf("%s", num + len)) len += strlen(num + len);
	for(int i = 0; i < strlen(num); i++) {
		//num[i] = num[i] - '0';
		if(num[i] == '0')zero += 1;
		else ans *= (num[i] - '0');
		if(i >= 13) {
			if(num[i - 13] == '0') zero -= 1;
			else ans /= (num[i - 13] - '0');

			if((zero == 0) && (ans > result))result = ans;
		}

	}
	cout << result << endl;
	return 0;
}

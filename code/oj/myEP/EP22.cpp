/*************************************************************************
	> File Name: EP22.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月06日 星期一 16时10分16秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define max 5000

int main() {
int n;
string name[max + 5];
for(int i = 0; i < max; i++) {
  scanf("%s", name);
}
//	cout << name[1][1] << endl;

    long long p = 0;
/*	sort(name, name + max);
	for(int j = 0; j < max ; j++) {
		int sum = 0;
		for(int k = 0; k < name[j].length(); k++) {
			sum += (name[j][k] - 'A' + 1);
		}
	   p += sum * j;
	   

	}*/

    //cout << p << endl;
	return 0;
}

/*************************************************************************
	> File Name: EP01.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月04日 星期六 16时54分13秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 1000
int num[max + 5] = {0};
int main() {
	int sum = 0;
 for(int i = 3; i <= max; i += 3) {
	num[i]= 1;
 }
 for(int i = 5; i <= max; i += 5) {
    num[i] = 1;
 }
 for(int j = 3; j < max; j++) {
  if(num[j]) sum += j;
 }
  cout << sum << endl;
	return 0;
}

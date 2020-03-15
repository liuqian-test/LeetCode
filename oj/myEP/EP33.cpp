/*************************************************************************
	> File Name: EP33.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月08日 星期三 14时05分23秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max 100

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int is_val(int i, int j) {

int a1 = i % 10, a2 = i / 10;
int b1 = j % 10, b2 = j / 10;
if(a1 == 0 || a2 == 0 || b1 == 0 || b2 == 0)return 0;
if((a2 == b2) && ((a1 * j) == (b1 * i))) return 1;
if((a2 == b1) && ((a1 * j) == (b2 * i))) return 1;
if((a1 == b2) && ((a2 * j) == (b1 * i))) return 1;
if((a1 == b1) && ((a2 * j) == (b2 * i))) return 1;
return 0;

}

int main() {
	int a = 1, b = 1;
	for(int i = 11; i < max; i++) {
		for(int j = i + 1 ; j < max; j++) {
		   if(is_val(i, j)) {
		   a *= i;
		   b *= j;
		   }
		}
	
	}
	int k = gcd(a, b);
	int h = b / k;
	cout << h<< endl;
	
	return 0;
}

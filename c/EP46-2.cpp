/*************************************************************************
	> File Name: EP46-2.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月03日 星期五 09时35分33秒
 ************************************************************************/

#include<iostream>
#include <cmath>
using namespace std;
#define max 1000000

int is_prime[max + 5] = {1, 1, 0};
int prime[max + 5] = {0};

void init() {
	for(int i = 2; i <= max; i++) {
	  if(is_prime[i] && prime[i] & 1) prime[++prime[0]] = i;
	  for(int j = 1; j <= prime[0]; j++ ) {
	  if(prime[j] * i > max) break;
	  is_prime[prime[j] * i] = 1;
	  if(i % prime[j] == 0) break;
	  }
	}
}

int main() {
// init();
 int ans = 0;
 //for(int j = 1; j <= prime[0]; j++) {
//	for(int i = prime[j] - 1; i >= 2; i--) {
	//	if(!is_prime[i]){
//			int k = prime[j] - is_prime[i];
//		     ans = sqrt(k / 2);
//		}
//	}
//  if(ans == 0){
//	  cout << prime[j] << endl;
//	  return 0;
//  }
// }


	return 0;
}


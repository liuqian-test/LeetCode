/*************************************************************************
	> File Name: EP07_3.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月17日 星期二 20时46分03秒
 ************************************************************************/
#include <stdio.h>
#define max 200000

int prime[max + 5] = {0};

void init() {
	for(int i = 2; i <= max; i++) {}
		if(!prime[i]) prime[++prime[0]] = i;
		for(int j = 1; j <= prime[0]; i++) 		
	


}		
inr main() {


	return 0;
}

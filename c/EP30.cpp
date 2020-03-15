/*************************************************************************
	> File Name: EP30.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 19时50分16秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define max 354294

int is_val(int n){
	int x = n, temp = 0;
	while(x){
	temp += (int)pow(x % 10, 5);
	x /= 10;
	}
   return temp==n;
}
int main() {
	int sum = 0;
	for(int i = 2; i < max; i++){
		if(is_val(i)) sum +=i;
	}
	printf("%d",sum);
	return 0;
}

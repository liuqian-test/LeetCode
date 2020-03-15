/*************************************************************************
	> File Name: EP36.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月15日 星期日 20时47分25秒
 ************************************************************************/
#include <stdio.h>
#define MAX 1000000
int is_val(int n, int base1, int base2){
	int x = n, x1 = n;
	int temp = 0,temp1 = 0;
	while(x){
   temp = temp * base1 + x % base1;
   x /= base1;
	}
	while(x1){
	temp1 = temp1 * base2 + x1 % base2;
	x1 /= base2;
	}
	return temp == temp1 && temp == n;

}
int main(){
    int sum = 0;
	for(int i = 1;i < MAX; i++) {
	 if(is_val(i,10,2)) sum += i;
	}
	printf("%d", sum);
	return 0;
}

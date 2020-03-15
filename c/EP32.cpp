/*************************************************************************
	> File Name: EP32.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 16时27分05秒
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define max 10000


int digit(int n) {

	return floor(log10(n)) + 1;
}

int check(int *num, int n) {
	while(n) {
		if(num [n % 10]) return 0;
		num[n % 10] = 1;
	    n = n / 10;
	}
	return 1;
}

int is_val(int a, int b) {
	int num[10] = {0};
	num[0] = 1;
	if(digit(a) + digit(b) + digit(a * b) - 9) return 0;
	int flag = 1;
	flag = flag && check(num,a);
	flag = flag && check(num,b);
	flag = flag && check(num,a * b);
   return flag;
}

int keep[max + 5] = {0};
int main() {
	int sum = 0;
	for(int i = 1; i < 100; i++) {
		for(int j = i + 1; j < 10000; j++) {
			if(!(is_val(i, j))) continue;
			if(!(keep[i * j])) sum += i * j;
			keep[i * j] = 1;
		}
	}
	printf("%d\n", sum);
	return 0;

}

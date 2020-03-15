/*************************************************************************
	> File Name: EP35.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月22日 星期日 18时58分28秒
 ************************************************************************/
#include <stdio.h>
#define max 1000000
#define max1 2000000

int num[max + 5];
int num1[max1 + 5];
void init(){	
	num[1] = 1;
	for(int i = 2; i * i < max; i++) {
	 for (int j = 2; j * i < max ;j++) {
	   num[i * j] = 1;
	 }
	}
}


int is_val(int n) {
int tmp;int a=0,j=0;
int n1 = n, n2 = n;
while(n1){
tmp = n1 % 10;
n1 /= 10;
num1[a++] = tmp;
j++;
}
while(n2) {
tmp = n2 % 10;
n2 /= 10;
num1[a++] = tmp;
}

for(int p = 0; p < 2*j; p++) {
	int sum = 0;
	for(int p1 = p; p1 < p+j && p+j < 2*j; p1++) {
	sum = sum *10 +num1[p1];
}
   if(num[sum])return 0;
   
}
 return 1;
}
int k=13;
int main() {
init();
 for(int i = 100; i < max; i++) {
 if(!num[i] && is_val(i)){
 k++;
 }
 }
printf("%d\n",k);
	return 0;
}

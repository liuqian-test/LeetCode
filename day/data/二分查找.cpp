/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 二分查找.cpp
*       &Created Time: 20Century 2020年02月20日 星期四 20时33分51秒 
*                          CST  Day/051 and Week/07 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#define P(func, args...) {
printf("%s");

}


// 1 3 5 6 8 9
int binary_sertch1(int num, int n, iint x) {
	int head = 0, tail = n - 1, mid;
	while(head < tail) {
		mid = (head + tail) >> 1;
		if(num[mid] == x)return mid;
		if(num[mid] > x)tail = mid - 1;
		else head = mid + 1;
	}
	return -1;
}
//111111111110000000000
int b2(int *num, int n) {
	int head = -1, tail = n -1, mid;
	while(head < tail) {
		mid = (head + tail + 1) >> 1;
		if(num[mid] == 1)head = mid;
		else tail = mid - 1;
	}
	return head;
}

//000000001111111111找第一个一
int b3(int *num, int n) {
	int head = 0; tail = n, mid;
	while(head < tail) {
		mid = (head + tail) >> 1;
		if(num[mid] == 1)tail = mid;
		else head = mid + 1;
	}
	return head == n ? -1 : head;
}


int mian() {
	int arr1[11] = {1, 3, 5, 6, 7, 9, 34, 56, 66, 88, 99};
	int arr2[10] = {1,1,1,1,1,1,0,0,0,0};
	int arr3[10] = {0,0,0,0,1,1,1,1,1,1};
	P(b1, arr1, 11, 66);
	P(b2, arr2, 10);
	P(b3, arr3, 10);
	return 0;
}

/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: sort.cpp
*       &Created Time: 20Century 2020年02月26日 星期三 23时22分52秒 
*                          CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void insert(int *num, int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int  j = i; j >= 0; j-- ) {
			if(num[j] > num[j + 1])swap(&num[j], &num[j + 1]);
		}
	}
}

void bubble(int *num, int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(num[j] > num[ j + 1])swap(&num[j], &num[j + 1]);
		}
	}

}

void output(int *num, int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ", num[i]);

	}
	printf("\n");
}
int main() {
	int n, num;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int num1[6] = {99,5,180,55,200,32};
	insert(arr, n);      //插入排序  将数组后面待排序的元素插入到前面；
	bubble(num1, 6);    //冒泡排序  两两比较， 两两交换；
	output(arr, n);
	output(num1, 6);
	return 0;
}

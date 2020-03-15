/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 2.排序复习.cpp
*       &Created Time: 20Century 2020年02月21日 星期五 20时44分55秒 
*                          CST  Day/052 and Week/07 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void insert(int *num, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i - 1; j >= 0; j--) {
			if(num[j] > num[j + 1])swap(&num[j], &num[j + 1]);
			else break;
		}
	}
	return ;
}

void bubble_sort(int *num, int n) {
	for(int i = 0; i < n; i++) {
		int temp = 0;
		for(int j = 0; j < n - i - 1; j++) {
			if(num[j] > num[j + 1])swap(&num[j], &num[j + 1]), temp = 1;
		}
		if( temp == 0)break;
	}
	return ;
}

void merge_sort(int *num, int l, int  r) {
	if(l == r) return ;
	int mid = (l + r) / 2;
	merge_sort(num, l, mid);
	merge_sort(num, mid + 1, r);
	int temp[r - l + 1];
	int x = l, y = mid + 1, loc = 0;
	while(x <= mid || y <= r) {
		if(x <= mid && (y > r || num[x] <= num[y])) {
		     temp[loc] = num[x];
			 x++;
			 loc++;
		}else {
			temp[loc] = num[y];
			y++;
			loc++;
		}

	}

	for(int i = l; i <= r; i++) {
		num[i] = temp[i - l];
	}
	return ;
}

void delect_sort(int *num, int len) {
	for(int i = 0; i < len; i++) {
		int temp = i;
		for(int j = i + 1; j < len; j++) {
			if(num[j] < num[temp])temp = j;
		}
		if(temp != i)swap(&num[i], &num[temp]);
	}

	return ;
}
void output(int *num, int len) {
	for(int i = 0; i < len; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

}
int main() {
	int num[10] = {3, 5, 6, 8, 9, 5, 3, 11, 55, 66};
	int num1[10] = {12,56,66,1,2,9,8,7,6,9};
	int num2[10] = {9,6,3,3,7,55,66,99,85,91};
	insert(num, 10);
	output(num, 10);
	bubble_sort(num1, 10);
	output(num1, 10);
	merge_sort(num2, 0, 9);
	output(num2, 10);

	return 0;
}

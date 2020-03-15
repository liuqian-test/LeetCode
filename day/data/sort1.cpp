/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: sort1.cpp
*       &Created Time: 20Century 2020年03月03日 星期二 21时59分34秒 
*                          CST  Day/063 and Week/09 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

//交换
void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

//	插入
void insert(int *num, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i - 1; j >= 0; j--) {
			if(num[j] > num[j + 1])swap(&num[j], &num[j + 1]);
		}
	}
}


//冒泡
void bubble(int *num, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n -i - 1; j++) {
		if(num[j] > num[j + 1]) swap(&num[j], &num[j + 1]);
		}
	}
}

//归并
void meger_sort(int *num, int l, int r) {
	if(l >= r) return ;
	int mid = (l + r) / 2;
	meger_sort(num, l, mid);
	meger_sort(num, mid + 1, r);
	int temp[r - l + 1];
	int x = l, y = mid + 1, pos = 0;
	while(x <= mid || y <= r) {
		if(x <= mid && (y > r || num[x] < num[y])){
			temp[pos++] = num[x];
			x++;
		}else {
			temp[pos++] = num[y];
			y++;
		}
	}
	for(int i = l; i <= r; i++) {
		num[i] = temp[i - l];
	}
}

//选择
void select_sort(int *num, int n) {
	int temp = 0;
	for(int i = 0; i < n; i++) {
		temp = i;
		for(int j = i + 1; j < n; j++) {
		if(num[temp] > num[j])temp = j;
		}
		if(temp != i)swap(&num[i], &num[temp]);
	}
}

//快速
void quick(int *num, int l, int r) {
	if(l >= r) return ;
	int pivot = num[l], low = l, high = r;
	while(low < high) {
		while(low < high && num[high] > pivot) {
		high--;
		}
		num[low] = num[high];
		while(low < high && num[low] < pivot) {
		low++;
		}
		num[high] = num[low];
	}
	num[low] = pivot;
	quick(num, l, low - 1);
	quick(num, low + 1, r);
}

void output(int *num, int n) {
	for(int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

int main() {
	int num[10] = {99, 56, 23, 5, 66, 88, 12, 1, 52, 32};
	//insert(num, 10);
	//bubble(num, 10);
	//meger_sort(num, 0, 9);
	//select_sort(num, 10);
	quick(num, 0, 9);
	output(num, 10);
	return 0;
}

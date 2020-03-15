/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: sort.cpp
*       &Created Time: 20Century 2020年02月27日 星期四 13时36分56秒 
*                          CST  Day/058 and Week/08 of this year
*       &Description:
***********************************************************/


#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}


//插入排序
void insert(int *num, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i - 1; j >= 0; j--) {
			if(num[j] > num[j + 1]) swap(&num[j], &num[j + 1]);
		}
	}
	return ;
}
//冒泡排序
void bubble(int *num, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(num[j] > num[j + 1])swap(&num[j], &num[j + 1]);
		}
	}
		return ;
}

//归并排序

void merge_sort(int *num, int l, int r) {
	if(l == r) return ;
	int mid = (l + r) / 2;
	merge_sort(num, l, mid);
	merge_sort(num, mid + 1, r);
	int temp[r - l + 1];
	int x = l, y = mid + 1, pos = 0;
	while(x <= mid || y <= r) {
		if(x <= mid && (y > r || num[x] < num[y])) {
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

//选择排序
void select_sort(int *num, int length) {
	int temp = 0;
	for(int i = 0; i < length - 1; i++) {
		temp = i;
		for(int j = i + 1; j < length; j++) {
			if(num[temp] > num[j])temp = j;
		}
		if(i != temp)swap(&num[temp], &num[i]);
	}

}

void output(int *num, int n)  {
	for(int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
}


//快速排序
void quick_sort(int *num, int l, int r) {
	if(l > r) return ;
	int pivot = num[l], low = l, high = r;
	while(low < high) {
		while(low < high && num[high] >= pivot) {
			high--;
		}
			num[low] = num[high];
		while(low < high && num[low] <= pivot) {
			low++;
		}
		num[high] = num[low];
	}
	    num[low] = pivot;
		quick_sort(num, l, low - 1);
		quick_sort(num, low + 1, r);
	
}


int main() {
	
	int *num = (int *)malloc(sizeof(int) * 15);
	for(int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
//	insert(num, 10);
//	bubble(num, 10);
//    merge_sort(num, 0, 9);
//	select_sort(num, 10);
	quick_sort(num, 0, 9);
	output(num, 10);
	printf("\n");
	return 0;
}

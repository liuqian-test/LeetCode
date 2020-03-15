/*************************************************************************
	> File Name: EP17.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月21日 星期六 15时16分26秒
 ************************************************************************/
#include <stdio.h>

int get_letter(int n) {
	int arr1[20] = {
	0,3,3,5,4,4,3,5,5,4,3,
	6,6,8,8,7,7,9,8,8
	};
	int arr2[10] = {
		0, 0, 6, 6, 5, 5, 5, 7, 6, 6
	};
	if(n < 20){
		return arr1[n];
	}else if(n < 100){
	    return arr2[n / 10] + arr1[n % 10];
	}else if(n < 1000){
		if(n % 100 == 0){
			return arr1[n / 100] + 7;
		}
		return arr1[n / 100] + 10 + get_letter(n % 100);
	}else{
	
		return 11;
	}

}
int main() {
	int sum = 0;
	for(int i = 1; i <= 1000; i++) {
	     sum += get_letter(i);
	}
	printf("%d\n",sum);
	return 0;
}

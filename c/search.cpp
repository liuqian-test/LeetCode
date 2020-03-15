/*************************************************************************
	> File Name: search.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月10日 星期二 18时18分41秒
 ************************************************************************/

#include<iostream>
using namespace std;
int search2(int * arr , int n) {
int head=0,tail=n-1, mid;
while(head < tail) {
mid = (head + tail)>>1;
if(arr[mid]< 1) head = mid +1;
else tail = mid;
}
return head;
}



//int f(int x) {


//}
int search(int *arr,int x,int n){
	int head=0, tail = n-1, mid = n/2;
	while(head <= tail){
		mid = (head + tail)/2;
		if(arr[mid] == x) return mid;
		if(arr[mid]<x) head = mid +1;
		else  tail = mid-1;
	}
	return -1;
}
int main(){
int n;
int arr[100];
scanf("%d",&n);
for(int i=0; i< n;i++){
scanf("%d",&arr[i]);
}
int x;
//scanf("%d", &x);
printf("%d",search2(arr ,n));
return 0;
}

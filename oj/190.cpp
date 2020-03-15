/*************************************************************************
	> File Name: 190.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月21日 星期六 19时43分11秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define max 8000000
int n[max + 5];
 void init(){
	 n[0] =  1; n[1] = 1;
for(int i = 2; i * i < max; i++){
	for(int j = 2; j * i <max; j++){
	n[i * j]=1;
	}
}
 }
int val(int p){
	int k=0;
for(int i = 2; i <= p/2; i++){
 int t = p - i;
 if((n[t] == 0) &&n[i]==0){
 k++;
 }
}
return k;
}
int main(){
init();
int n1;
scanf("%d",&n1);
int y=val(n1);
printf("%d",y);

}

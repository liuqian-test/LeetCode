/*************************************************************************
	> File Name: te.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月07日 星期六 20时25分03秒
 ************************************************************************/

#include<iostream>
using namespace std;
int fac(int a) {
return a-2;
}

int fac1(int a) {
return a+2;
}

int g(int (*fac)(int),int (*fac1)(int),int x) {
if(x>5){
return fac(x);
}else {

return fac1(x);
}
}
int main(){
int i, k, b;
while(scanf("%d", &k) != EOF){
printf("f(%d)=%d",k,g(fac,fac1, k));
}
}

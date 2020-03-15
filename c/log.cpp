/*************************************************************************
	> File Name: log.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月12日 星期四 19时17分32秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
#define DEFINE
#ifdef DEBUG
#define log(frm , arg...) {\
	printf("%s : %s : %d",__FILE__, __func__, __LINE__);\
	printf(frm, ##arg);\
	printf("\n");\
}
int main() {
	int abcdef = 15;
	contact(abc, def);
	int a = 123;
	printf("%d",a);
	return 0;

}

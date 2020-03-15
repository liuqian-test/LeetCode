/*************************************************************************
	> File Name: test02.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月11日 星期六 16时21分04秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main() {
	char str[1000];
	scanf("%[^\n]s", str);
	int len = strlen(str);
	for(int i = 0; str[i]; i++) {
		if(str[i] == ' ')str[i] = '\n';
	}
	printf("%d", str);

}

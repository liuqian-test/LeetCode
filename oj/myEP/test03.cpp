/*************************************************************************
	> File Name: test03.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月11日 星期六 18时12分38秒
 ************************************************************************/

#include<iostream>
using namespace std;


//#define offset(T, item)(long long)(&(((T * )(NULL)) -> item))

#define offset(T, item) ({\
	T temp; \
	(char *)(&(temp.item));\
	//(char *)(&(temp.item)) - (char *)(&temp);\
}) 

struct Data {
	char a;
	int c;
	double d;
};
int main() {
//	struct Data d1;
	printf("%ld\n", offset(struct Data, a));
	printf("%ld\n", offset(struct Data, c));
	printf("%ld\n", offset(struct Data, d));
	return 0;
}

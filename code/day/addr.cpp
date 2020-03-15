/*************************************************************************
	> File Name: addr.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月12日 星期日 11时10分37秒
 ************************************************************************/

#include<iostream>
using namespace std;

struct Data {
	int x, y;
};


int main() {
/*	int a[3] = {1, 2, 3};
	int *p = a;
	cout << "p + 1==" << p + 1 << endl;
	cout << "&a[1]==" << &a[1] << endl;
	cout << "a + 1==" << a + 1 << endl;
	cout << "&a[0] + 1==" << &a[0] + 1 << endl;
	cout << "&p[1]=="<< &p[1] << endl;
	cout << "&p[2] - 1" << &p[2] - 1 << endl;
	cout << "&a[2] - 1" << &a[2] - 1 << endl;
    //cout << &a[0] << endl;  */

	struct Data a[2], *p = a;
	cout << "&a[1] ==" << &a[1].x << endl;
	cout << "&((p + 1) -> x) ==" << &((p + 1) -> x) << endl;
	cout << "&(a + 1 -> x) ==" << &(a + 1) -> x << endl;
	cout << "&(p[1].x) ==" << &p[1].x << endl;
	cout << "&(&a[0] + 1) -> x) ==" << &((&a[0] + 1) -> x) << endl;
	cout << "&(&p[0] + 1 -> x)==" << &((&p[0] + 1) -> x) << endl;
	cout << "&(*(p + 1).x)==" << &((*(p + 1)).x) << endl;
	cout << "&(*(a + 1).x)==" << &((*(a + 1)).x) << endl;
	cout <<

	return 0;
}

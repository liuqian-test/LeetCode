/*************************************************************************
	> File Name: my_printf.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月12日 星期四 14时13分39秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<stdarg.h>
using namespace std;

int my_printf(const char * frm, ...) {
	int cnt;
	va_list arg;
	va_start(arg, frm);
	for(int i = 0; frm[i]; i++) {
	//	putchar(frm[i]); cnt += 1;
		switch(frm[i]) {
			case '%':{
					 switch(frm[++i]) {
		
						 case 'd':{
							int x = va_arg(arg, int);
							while() {
							
							}
							putchar(x +'0');
								  
								  } break;
					 }
					 
					 
					 } break;
		}
}
	return cnt;
}

int main() {
	
	my_printf("%d",596);
	return 0;
}

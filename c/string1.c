/*************************************************************************
	> File Name: string1.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2019年12月12日 星期四 20时31分31秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
void test_sscanf() {
	char str1[]="123 456 789 987";
	int a, b, c, d,e;
	sscanf(str1,"%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("%d %d %d %d %d",a,b,c,d,e);

}
int main() {
	int num,str[10];
	scanf("%d",&num);
//	printf("%d",sprintf(str[10], "%x", num));
	test_sscanf();
	return 0;
}

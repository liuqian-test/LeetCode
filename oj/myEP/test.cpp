#include <iostream>
#
using namespace std;

int f1(int n) {
	return n * 2;
}

int f2(int n){
   return n * n + 3;
}

int f3(int n) {
	return n >> 1;
}

int (*f[3])(int) = {
	f1, f2, f3
	}
int main() {
 srand(time(0));
 int n;
 cin >> n;
 printf("%d",f[rand() % 3](n));
 return 0;
}

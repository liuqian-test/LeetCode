/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 202.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时28分45秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


/*bool isHappy(int n){
   
    int i = 0;
    int num = n;
    int ans = 0;
    while(i < 100) {
         // printf("%d + %d  ",arr[ans], ans);
            ans = 0;
         while(num) {
        
         ans += (num % 10) * (num % 10);
         num = num / 10;
         }
         i++;
         if(ans == 1)return true;
         num = ans;
}
    return false;;
}

*/


//使用快慢指针
int get_next(int n) {
    int temp = 0;
    while(n) {
        temp += (n % 10) * (n % 10);
        n /= 10;
    }
    return temp;
}
bool isHappy(int n) {
    int p = n, q = n;
    while(q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if(p == q) break;
    }
    return q == 1;
}

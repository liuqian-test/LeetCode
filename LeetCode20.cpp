/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode20.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时35分48秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


bool isValid(char * s){
    if(s == NULL)return true;
     int len = strlen(s);
    if(len % 2 != 0) return false; 
    int top = -1;
    int flag = 1;
    char *ch = (char *)malloc(sizeof(char) * len);
    while (s[0]) {
        switch(s[0]) {
            case '(':
            case '{':
            case '[': ch[++top] = s[0];break;
            case ')': flag = top != -1 && ch[top--] == '(';break;
            case '}': flag = top != -1 && ch[top--] == '{';break;
            case ']': flag = top != -1 && ch[top--] =='[';break;
        }
        if(flag == 0)break;
        s++;
    }

   if(top == -1 && flag)return true;
   return false;
}

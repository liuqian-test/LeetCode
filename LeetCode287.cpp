/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 287.cpp
*       &Created Time: 20Century 2020年02月28日 星期五 16时33分37秒 
*                          CST  Day/059 and Week/08 of this year
*       &Description:
***********************************************************/


int findDuplicate(int* nums, int numsSize){
    int arr[200000] = {0};
    int k = 0;
    for(int i = 0; i < numsSize; i++) {
        if(arr[nums[i]])return nums[i];
        arr[nums[i]] = 1;
    }
    return ;
}

1 3 4 2 2 
/*

int find() {
    int p = num[0], q = num[0];
    do {
        p = num[p];
        q = num[num[q]];
    }while(p != q);
    q = num[0];
    while(q != p) {
        p = num[p];
        q = num[q];
    }
    return p;
}


*/

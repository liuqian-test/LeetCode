/*************************************************************************
	> File Name: main.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年01月07日 星期二 13时59分07秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "haizei_test.h"

int add(int a, int b) {
    return a + b;
}


__attribute__((constructor))
int haizei_init() {
    printf("\033[5;33;44mhello haizei\033[0m");
	printf("\n");	
	return 0;
}


TEST(testFunc, add) {
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_NE(add(5, 3), 9);
    EXPECT_GT(add(6, 7), 10);
    EXPECT_LE(add(6, 7), 13);
    EXPECT_GT(add(6, 7), 20);
}

TEST(testFunc, add2) {
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(6, 7), 13);
    EXPECT_EQ(add(6, 9), 15.3);
}


int main(int argc, char *argv[]) {
//    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}




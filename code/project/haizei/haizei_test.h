/***********************************************************
*       &Author: liu_qian     
*       &E-mail: liu_qian@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: haizei_test.h
*       &Created Time: 20Century 2020年01月12日 星期日 18时27分18秒 
*                          CST  Day/012 and Week/02 of this year
*       &Description:
***********************************************************/
#ifndef _HAIZEI_TEST_H
#define _HAIZEI_TEST_H


#define TEST(a, b) void a##b()
#define EXPECT_EQ(a, b){\
	if(a == b) {\
	printf("YES\n");\
	} else {\
	printf("no\n");\
	}\
}

int RUN_ALL_TESTS();



#endif

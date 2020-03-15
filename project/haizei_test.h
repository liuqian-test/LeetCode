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
#define MAX_N 1000



#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define COLOR_HL(a, b) "\033[1;" #b "m" a "\033[0m"


#define GREEN(a) COLOR(a, 32)
#define RED(a) COLOR(a, 31)
#define BLUE(a) COLOR(a, 34)
#define YELLOW(a) COLOR(a, 33)


#define GREEN_HL(a) COLOR_HL(a, 32)
#define RED_HL(a) COLOR_HL(a, 31)
#define BLUE_HL(a) COLOR_HL(a, 34)
#define YELLOW_HL(a) COLOR_HL(a, 33)


typedef void (*Func_T)();
//extern Func_T func_arr[MAX_N];
extern int func_cnt;
extern struct Funfo info;


#define TEST(a, b)\
    void a##b();\
    __attribute__((constructor))\
    void add_##a##b() {\
        add_function(a##b, #a "." #b);\
    }\
    void a##b()


#define EXPECT(a, b, comp) { \
	__typeof(a) _a = (a), _b = (b);\
	info.total += 1; \
	if(_a comp _b) info.succuss += 1; \
	else { \
		printf("\n"); \
		printf(YELLOW_HL("\t%s:%d: Failure\n"), __FILE__, __LINE__); \
		printf(YELLOW_HL("\t\texpect" #a " " #comp " " #b " actual :")); \
		printf("\n"); \
	}\
	printf(GREEN("[-----------] ") #a " " #comp " " #b); \
	printf(" %s\n", (_a)  comp (_b) ? GREEN_HL("TRUE") : RED_HL("FALSE")); \
}

#define EXPECT_EQ(a, b) EXPECT(a, b ,==)
#define EXPECT_LT(a, b) EXPECT(a, b ,<)
#define EXPECT_LE(a, b) EXPECT(a, b ,<=)
#define EXPECT_GT(a, b) EXPECT(a, b ,>)
#define EXPECT_GE(a, b) EXPECT(a, b ,>=)
#define EXPECT_NE(a, b) EXPECT(a, b ,!=)

struct Function {
	Func_T func;
	const char *str;
	struct Function *next;
};

struct Funfo {
	int total,succuss;


};

extern struct Function head, *tail;
void add_function(Func_T, const char *);


int RUN_ALL_TESTS();

#endif


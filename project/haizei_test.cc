#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#include "haizei_test.h"

Function func_arr[100];
// struct Function head, *tail = &head;
int func_cnt = 0;

struct Funfo info;

int RUN_ALL_TESTS() {
    for (int i = 0; i < func_cnt; i++) {
	//struct Function *p = head.next;
	
        printf(GREEN("[====RUN====]") RED_HL("%s\n"), func_arr[i].str);
		info.total = info.succuss = 0;	
		func_arr[i].func();
		double rate = 100.0 * info.succuss / info.total;
	//	printf(GREEN("[  ") "%6.2lf%%" GREEN("  ]") "\n", 100.0 * info.succuss / info.total);
	    printf(GREEN("[  "));
		if(rate == 100.00) {
			printf(BLUE_HL("%6.2lf%%"), rate);
		} else {
			printf(RED_HL("%6.2lf%%"), rate);
		}
		printf(GREEN("  ]"));
		printf(" total : %d    expect : %d\n",info.total, info.succuss );
	//	printf("%s\n",strdup(func_arr[i]));
        
    }
    return 0;
}


void add_function(Func_T func, const char *str) {
	func_arr[func_cnt].func = func;
	func_arr[func_cnt].str = strdup(str);
	func_cnt++;
	return ;


	//struct Function *p = (struct Function *)malloc(sizeof(struct Function))
	// p->func = func;
	// p->func_str = strdup(str);
	// p->next = NULL;
	// tail->next = p;
	// tail = p;
	// return ;
}





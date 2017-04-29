#include <stdlib.h>
#include <stdio.h>
#include "test_runner.h"
#include "menu_alloc_test.h"


Test *tests = NULL;
int size = 0, passed = 0, fail = 0;

void addIndex() {
    size = size + 1;
}
int getIndex() {
    return size;
}
Test *allocTest(Test test, Test *tests) {

    tests = (Test*) realloc(tests, (getIndex() + 1) * sizeof(Test));

    if(tests != NULL) {
        tests[getIndex()] = test;
        addIndex(); 
    }
    return tests;
} 
void registryTest(Test test) {
    tests = allocTest(test, tests);
}
int getTest(int i) {
    return tests[i]();
}
int run() {
    int i;
    for(i = 0; i < getIndex(); i++) {
        if(getTest(i)) {
            printf("TEST [%d]  -  PASSED! \n", (i + 1));
            passed++;
        } else {
            printf("TEST [%d] - FAIL! \n", (i + 1));
            fail++;
        }
    }
    printf("\n PASSED: [%d]  |   FAIL: [%d] \n", passed, fail);
    
    if(fail) {
        fprintf(stderr, "\n Have fails! \n");
        exit(EXIT_FAILURE);
    } else {
        exit(EXIT_SUCCESS);
    }
    return 0;
}
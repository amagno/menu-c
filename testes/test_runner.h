/* 
 *  Author: Alexandre Magno Monteiro
 *  Repositório: https://github.com/amagno/exercicio-interface-c
 */
#ifndef TEST_RUNNER_H
#define TEST_RUNNER_H

typedef int (*Test)();
int testExists();
Test *allocTest();
int getTest();
void registryTest(Test teste);
int run();


#endif


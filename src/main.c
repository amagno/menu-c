/* 
 *  Author: Alexandre Magno Monteiro
 *  Reposit�rio: https://github.com/amagno/exercicio-interface-c
 */
#include <stdio.h>
#include <stdlib.h>
//#include "../menu/menu.h"
#include "../testes/menu_alloc_test.h"
#include "../testes/test_runner.h"


void exemplo1() {
    printf("\n Exemplo.....1 \n\n");
}
void exemplo2() {
    printf("\n Exemplo.....2 \n\n");
}
void exemplo3() {
    printf("\n Exemplo.....3 \n\n");
}
void exemplo4() {
    printf("\n Exemplo.....4 \n\n");
}
int main() {
    //return renderizarMenu();
    registryTest(teste1);
    registryTest(teste2);
    run();

}


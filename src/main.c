/* 
 *  Author: Alexandre Magno Monteiro
 *  Reposit�rio: https://github.com/amagno/exercicio-interface-c
 */
#include <stdio.h>
#include <stdlib.h>
#include "../menu/menu.h"

void testing1() {
    printf("testing.....1 \n\n");
}
void testing2() {
    printf("testing.....2 \n\n");
}
void testing3() {
    printf("testing.....3 \n\n");
}
void testing4() {
    printf("testing.....4 \n\n");
}
int main() {
    registrarOpcao(1, testing1, "Enunciado exemplo 1");
    registrarOpcao(2, testing2, "Enunciado exemplo 2");
    registrarOpcao(3, testing3, "Enunciado exemplo 3");
    registrarOpcao(4, testing4, "Enunciado exemplo 4");
    return renderizarMenu();
}


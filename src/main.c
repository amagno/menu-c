/* 
 *  Author: Alexandre Magno Monteiro
 *  Repositório: https://github.com/amagno/exercicio-interface-c
 */
#include <stdio.h>
#include <stdlib.h>
#include "../menu/menu.h"

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
    registrarOpcao(1, exemplo1, "Enunciado exemplo 1");
    registrarOpcao(2, exemplo2, "Enunciado exemplo 2");
    registrarOpcao(3, exemplo3, "Enunciado exemplo 3");
    registrarOpcao(4, exemplo4, "Enunciado exemplo 4");
    return renderizarMenu();
}


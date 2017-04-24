/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: alexandre
 *
 * Created on 23 de Abril de 2017, 17:59
 */
#include <stdio.h>
#include <stdlib.h>
#include "menu_interface.h"

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
    return renderizarMenu(1);
}


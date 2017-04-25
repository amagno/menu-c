/* 
 *  Author: Alexandre Magno Monteiro
 *  Repositório: https://github.com/amagno/exercicio-interface-c
 */
#ifndef MENU_INTERFACE_H
#define MENU_INTERFACE_H
#include "alloc_interface.h"

void limpaTela();
void pausa();
void registrarOpcao(int indice, Exercicio exercicio, char *enunciado);
void layout();
int renderizarMenu();

#endif /* MENU_INTERFACE_H */


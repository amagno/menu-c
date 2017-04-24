/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   menu_interface.h
 * Author: alexandre
 *
 * Created on 23 de Abril de 2017, 22:16
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


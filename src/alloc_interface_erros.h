/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   alloc_interface_erros.h
 * Author: alexandre
 *
 * Created on 23 de Abril de 2017, 21:34
 */

#ifndef ALLOC_INTERFACE_ERROS_H
#define ALLOC_INTERFACE_ERROS_H

typedef void (*LimpadorDeMemoria)();

int limpadorExiste();



void setLimpadorDeMemoria(LimpadorDeMemoria limpador);
void getLimpadorDeMemoria();
void erro_sem_memoria();
void erro_exercicio_nao_existe(int indice);
void cuidado_exercicio_duplicado(int indice);
char *erro_enunciado_nao_existe(int indice);
void cuidado_enunciado_duplicado(int indice);

#endif /* ALLOC_INTERFACE_ERROS_H */


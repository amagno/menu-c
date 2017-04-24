/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   alloc_interface.h
 * Author: alexandre
 *
 * Created on 23 de Abril de 2017, 22:07
 */

#ifndef ALLOC_INTERFACE_H
#define ALLOC_INTERFACE_H

typedef void (*Exercicio)();


void limpaMemoria();

void addExercicio();
int getTamanhoExercicios();

void inciaRegistroEnunciado();
void registroEnunciado(int indice);
int enunciadoExiste(int indice);
char **allocaEnunciado(char* enunciado, char** enunciados, int indice);
void setEnunciado(char *enunciado, int indice);
char *getEnunciado(int indice);

void iniciaRegistroExercicio();
void registroExercicio(int indice);
int exercicioExiste(int indice);
Exercicio *allocaExercicio(Exercicio exercicio, Exercicio *exercicios, int indice);
void setExercicio(Exercicio exercicio, int indice);
void getExercicio(int indice);

#endif /* ALLOC_INTERFACE_H */


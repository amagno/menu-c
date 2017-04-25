/*
 *  Author: Alexandre Magno Monteiro
 *  Repositório: https://github.com/amagno/exercicio-interface-c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alloc_interface.h"
#include "alloc_interface_erros.h"



char **enunciados = NULL;
Exercicio *exercicios = NULL;
int *registroEnunciados, *registroExercicios;
int registroEnunciadosIniciado = 0, registroExerciciosIniciado = 0;
int tamanhoExercicios;


void limpaMemoria() {
    free(enunciados);
    free(exercicios);
    free(registroEnunciados);
    free(registroExercicios);
}
void addExercicio() {
	tamanhoExercicios = tamanhoExercicios + 1;
}
int getTamanhoExercicios() {
	return tamanhoExercicios;
}
void inciaRegistroEnunciado() {
    if (!limpadorExiste()) {
        setLimpadorDeMemoria(limpaMemoria);
    }
    registroEnunciados = (int*) malloc(1 * sizeof (int));
    registroEnunciados[0] = 0;
    registroEnunciadosIniciado = 1;
}

void registroEnunciado(int indice) {
    registroEnunciados = (int*) realloc(registroEnunciados, (indice + 1) * sizeof (int));
    registroEnunciados[indice] = 1;
}

int enunciadoExiste(int indice) {
    if (registroEnunciados[indice] == 1) {
        return 1;
    }
    return 0;
}

char **allocaEnunciado(char* enunciado, char** enunciados, int indice) {

    if (!registroEnunciadosIniciado) {
        inciaRegistroEnunciado();
    }

    if (!enunciadoExiste(indice)) {
        enunciados = (char**) realloc(enunciados, (indice + 1) * sizeof (char*));
        if (enunciados) {
            enunciados[indice] = malloc((strlen(enunciado) + 1) * sizeof (char));
            enunciados[indice] = enunciado;
            registroEnunciado(indice);
        } else {
            erro_sem_memoria();
        }
        return enunciados;
    } else {
        cuidado_enunciado_duplicado(indice);
        return enunciados;
    }
}

void setEnunciado(char *enunciado, int indice) {
    enunciados = allocaEnunciado(enunciado, enunciados, indice);
}

char *getEnunciado(int indice) {
    if (enunciadoExiste(indice)) {
        return enunciados[indice];
    } else {
        return erro_enunciado_nao_existe(indice);
    }
}

void iniciaRegistroExercicio() {
    if (!limpadorExiste()) {
        setLimpadorDeMemoria(limpaMemoria);
    }
    registroExercicios = (int*) malloc(1 * sizeof (int));
    registroExercicios[0] = 0;
    registroExerciciosIniciado = 1;
}

void registroExercicio(int indice) {
    registroExercicios = (int*) realloc(registroExercicios, (indice + 1) * sizeof (int));
    registroExercicios[indice] = 1;
}

int exercicioExiste(int indice) {
    if (registroExercicios[indice] == 1) {
        return 1;
    }
    return 0;
}

Exercicio *allocaExercicio(Exercicio exercicio, Exercicio *exercicios, int indice) {
    if (!registroExerciciosIniciado) {
        iniciaRegistroExercicio();
    }
    if (!exercicioExiste(indice)) {
        exercicios = (Exercicio*) realloc(exercicios, (indice + 1) * sizeof(Exercicio));
        if (exercicios) {
            exercicios[indice] = exercicio;
            registroExercicio(indice);
        } else {
            erro_sem_memoria();
        }
        return exercicios;
    } else {
        cuidado_exercicio_duplicado(indice);
        return exercicios;
    }
}

void setExercicio(Exercicio exercicio, int indice) {
    exercicios = allocaExercicio(exercicio, exercicios, indice);
    addExercicio();
}

void getExercicio(int indice) {
    if (exercicioExiste(indice)) {
        return exercicios[indice]();
    } else {
        erro_exercicio_nao_existe(indice);
    }
}

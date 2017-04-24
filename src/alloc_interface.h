/* 
 *  Author: Alexandre Magno Monteiro
 *  Repositório: https://github.com/amagno/exercicio-interface-c
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


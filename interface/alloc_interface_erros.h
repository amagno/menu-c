/* 
 *  Author: Alexandre Magno Monteiro
 *  Repositório: https://github.com/amagno/exercicio-interface-c
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


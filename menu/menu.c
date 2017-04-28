/*
 *  Author: Alexandre Magno Monteiro
 *  Reposit�rio: https://github.com/amagno/exercicio-interface-c
 */
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#include "menu_alloc.h"

void limpaTela() {
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

void pausa() {
	int opcao;
	while(opcao != 0) {
		printf("Digite [0] para voltar ao menu -> ");
		scanf("%d", &opcao);
		limpaTela();
	}
}
void registrarOpcao(int indice, Exercicio exercicio, char *enunciado) {
    setExercicio(exercicio, indice);
    setEnunciado(enunciado, indice);
}

void layout() {
    int i;
    printf(" -- INTERFACE EXERC�CIOS -- \n\n");

    for (i = 0; i <= getTamanhoExercicios(); i++) {
        if (i == 0) {
            printf("[0]  -  SAIR \n");
        } else {
            if (enunciadoExiste(i)) {
                printf("[%d]  -  %s \n", i, getEnunciado(i));
            } else {
                printf("[%d]  - Exerc�cio sem enunciado \n", i);
            }
        }
    }

    printf("Digite a op��o desejada -> ");
}

int renderizarMenu() {
    setlocale(LC_ALL, "");
    int opcao;
    while (opcao != 0) {
        layout();
        scanf("%d", &opcao);

        if (exercicioExiste(opcao)) {
        	limpaTela();
            getExercicio(opcao);
            pausa();
        } else {
            if (opcao != 0) {
            	limpaTela();
            	printf("Op��o: [%d] n�o existe, por favor registro-a com a fun��o registrarOpcao();", opcao);
            	pausa();
            } else {
            	printf("Saindo......");
            	limpaMemoria();
            }
        }
    }
    return 0;
}

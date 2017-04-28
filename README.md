MENU EM C
=================
> Api em C para renderização de um menu no console
![alt text](https://github.com/amagno/menu-c/blob/master/gif/uso.gif "Usage Menu")

- [Exemplo](#exemplo)
- [Compilando e Instalando](#compilando-e-instalando)
- [Contribua](#contribua)

### Contribua
#### Contribua para este projeto 
- [x] Api do menu
- [ ] Testes
- [ ] Submenu

### Exemplo
#### Inclua o arquivo menu.h para utilização
```C
#include "../menu/menu.h"
```
#### Crie uma função void para ser executada na opção desejada:
```C
void exemplo() {
    printf("Exemplo sendo executado..... \n\n");
}
```
#### Chame a função void registrarOpcao(int número da opção, void função a ser executada, char* enunciado da opção) para assim registrar uma opção no menu:
```C
registrarOpcao(1, exemplo, "Executa função de exemplo");
```
#### Retorne a função renderizar menu int renderizarMenu();
```C
return renderizarMenu();
```
#### Exemplo de um arquivo main.c
```C
#include <stdio.h>
#include <stdlib.h>
#include "../menu/menu.h"

void exemplo1() {
    printf("exemplo.....1 \n\n");
}
void exemplo2() {
    printf("exemplo.....2 \n\n");
}
void exemplo3() {
    printf("exemplo.....3 \n\n");
}
void exemplo4() {
    printf("exemplo.....4 \n\n");
}
int main() {
    registrarOpcao(1, exemplo1, "Enunciado exemplo 1");
    registrarOpcao(2, exemplo2, "Enunciado exemplo 2");
    registrarOpcao(3, exemplo3, "Enunciado exemplo 3");
    registrarOpcao(4, exemplo4, "Enunciado exemplo 4");
    return renderizarMenu();
}
```
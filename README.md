MENU EM C
=================
[![label](https://img.shields.io/github/issues-raw/amagno/menu-c.svg)](https://github.com/amagno/menu-c/issues) ![License: LGPL v3](https://img.shields.io/badge/License-LGPL%20v3-blue.svg) [![Build Status](https://travis-ci.org/amagno/menu-c.svg?branch=master)](https://travis-ci.org/amagno/menu-c)
> Api em C para renderização de um menu no console
![alt text](https://github.com/amagno/menu-c/blob/master/gif/uso.gif "Usage Menu")

- [Contribua](#contribua)
- [Exemplo de uso](#exemplo)
- [Compilando e Instalando](#compilando-e-instalando)
- [Testando](#testando)

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
### Compilando e Instalando
> A compilação dos arquivo utiliza o make consulte para mais detalhes: [Utilizando o Make para Compilar C](http://www.klebermota.eti.br/2013/03/11/usando-o-gcc-e-o-make-para-compilar-lincar-e-criar-aplicacoes-cc/)
> Utilize no Windows com [MinGW](http://www.mingw.org/)

```shell
git clone https://github.com/amagno/menu-c.git
cd menu-c
make
```

### Testando
#### Rodando testes
##### Unix
```shell
make test
./test
```
##### Windows
```shell
make test
test.exe
```
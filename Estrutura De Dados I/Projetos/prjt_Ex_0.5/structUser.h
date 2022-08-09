//Tales Clemente Matsuda
//structUser.h
//Desenvolver as funções a serem executadas sobre o struct dinâmico
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct {
	char nome[50], rg[15], cpf[11], end[100];
} Usuario;

Usuario* addUser(Usuario* userList, int totNumUser);
//Cadastrar usuário

void mostrarLista (Usuario* userList, int totNumUser);
//Exibir os números cadastrados

void mostrarNumUser (int numTotUser);
//Exibir a quantidade de números cadastrados

Usuario* removeUser(Usuario* userList, int totNumUser);
//Remover o último número cadastrado

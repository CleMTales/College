//Tales Clemente Matsuda
//structUser.h
//Desenvolver as fun��es a serem executadas sobre o struct din�mico
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
//Cadastrar usu�rio

void mostrarLista (Usuario* userList, int totNumUser);
//Exibir os n�meros cadastrados

void mostrarNumUser (int numTotUser);
//Exibir a quantidade de n�meros cadastrados

Usuario* removeUser(Usuario* userList, int totNumUser);
//Remover o �ltimo n�mero cadastrado

//Tales Clemente Matsuda
//bibioteca.h
//Desenvolver as fun��es a serem executadas sobre o struct din�mico
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct {
	char nome[50], autor[50];
	int cod, ano;
} Livro;

Livro* addLivro(Livro* livroList, int totNumLivro);
//Cadastrar livro

void mostrarLista (Livro* livroList, int totNumLivro);
//Exibir os livros cadastrados


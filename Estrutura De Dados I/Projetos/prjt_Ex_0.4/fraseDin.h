//fraseDin.h
//Desenvolver as funções a serem executadas sobre o vetor dinâmico
//Tales Clemente Matsuda
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//Função para adicionar um caractere ao vetor
char* addChar(char *frase, int totChar, char newChar);

//Função para converter um caractere para o número correspondente em ASCII
int* charToASCII (char *frase, int totChar, int* fraseASCII);

//Função para exibir o vetor de caracteres (a frase escrita)
void mostrarFrase (char *frase, int totChar);

//Função para exibir o vetor de números (a frase convertida em ASCII)
void mostrarASCII (int *fraseASCII, int totChar);


//fraseDin.h
//Desenvolver as fun��es a serem executadas sobre o vetor din�mico
//Tales Clemente Matsuda
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//Fun��o para adicionar um caractere ao vetor
char* addChar(char *frase, int totChar, char newChar);

//Fun��o para converter um caractere para o n�mero correspondente em ASCII
int* charToASCII (char *frase, int totChar, int* fraseASCII);

//Fun��o para exibir o vetor de caracteres (a frase escrita)
void mostrarFrase (char *frase, int totChar);

//Fun��o para exibir o vetor de n�meros (a frase convertida em ASCII)
void mostrarASCII (int *fraseASCII, int totChar);


//fraseDin.cpp
//Desenvolver as funções a serem executadas sobre o vetor dinâmico
//Tales Clemente Matsuda
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

char* addChar(char *frase, int totChar, char newChar){
	if(totChar > 1)
		frase = (char *) realloc(frase, (totChar * sizeof (char))); 
	if (newChar != 8)
		frase[totChar-1] = newChar;
	return frase;
}

int* charToASCII (char *frase, int totChar, int* fraseASCII){
	int i;
	
	fraseASCII = (int *) realloc(fraseASCII, (totChar * sizeof (int))); 
	
	for (i = 0; i < totChar; i++){
		fraseASCII[i] = frase[i];
	}
	
	return fraseASCII;
}

void mostrarFrase (char *frase, int totChar){
	int i;
	for (i = 0; i < totChar; i++){
		if (frase[i] == 13)
			cout << endl;
		else if (frase[i] != 27)
			cout << frase[i] << "\t";
	}
}

void mostrarASCII (int *fraseASCII, int totChar){
	int i;
	for (i = 0; i < totChar; i++){
		if (fraseASCII[i] == 13)
			cout << endl;
		else if (fraseASCII[i] != 27)
			cout << fraseASCII[i] << "\t";
	}
}

int* removeVet (int* vet, int numVet){
	if (numVet != 0)
		vet = (int *) realloc(vet, (numVet * sizeof (int)));
	
}

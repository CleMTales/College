//Tales Clemente Matsuda
//vetorDin.cpp
//Desenvolver as fun��es a serem executadas sobre o vetor din�mico
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int* addVet(int *vet, int numVet){
	if(numVet > 1)
		vet = (int *) realloc(vet, (numVet * sizeof (int))); 
	cout << "Informe o " << numVet << "� n�mero do vetor: ";
	cin >> vet[numVet-1];
	return vet;
}

void mostrarVet (int* vet, int numVet){
	int i;
	cout << "O vetor �: (";
	for (i = 0; i < numVet; i++){
		cout << vet[i];
		if (i < numVet - 1)
			cout << ", ";
	}
	cout << ")"<< endl;
	
	return;
}

void mostrarNumVet (int numVet){
	cout << "O vetor atualmente possui " << numVet << " n�mero(s)." << endl;	
}

int* removeVet (int* vet, int numVet){
	if (numVet != 0)
		vet = (int *) realloc(vet, (numVet * sizeof (int)));
	
}

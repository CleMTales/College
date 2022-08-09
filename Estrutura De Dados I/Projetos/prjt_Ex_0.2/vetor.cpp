//Tales Clemente Matsuda
//vetor.cpp
//Desenvolver as funções a serem executadas sobre o vetor
#include <iostream>
#include <conio.h>
using namespace std;

void lerNum (int* n){
	for (int i = 0; i < 10; i++){
		cout << "Informe o " << i+1 << "º número: ";
		cin >> n[i];
	}
	return;
}

void mostrarVet (int* vet){
	int i;
	cout << "O vetor é: (";
	for (i = 0; i < 10; i++){
		cout << vet[i];
		if (i < 9)
			cout << ", ";
	}
	cout << ")"<< endl;
	
	return;
}

void mostrarImp (int* vet){
	int i;
	cout << "Os números ímpares do vetor são: (";
	for (i = 0; i < 10; i++){
		if (vet[i] % 2 == 1){
			cout << vet[i];
			if (i < 8)
				cout << ", ";
			}
	}
	cout << ")"<< endl;
	
}

void mostrarPar (int* vet){
	int i;
	cout << "Os números pares do vetor são: (";
	for (i = 0; i < 10; i++){
		if (vet[i] % 2 == 0){
			cout << vet[i];
			if (i < 9)
				cout << ", ";
		}
	}
	cout << ")" << endl;
	
}

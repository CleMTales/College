//Tales Clemente Matsuda
//vetorDin.h
//Cabeçalho de funções de vetor.h
#include <iostream>
#include <conio.h>
#include <stdlib.h>

//Função para ler e adicionar um número ao vetor
int* addVet(int *vet, int numVet);

//Função para exibir os números do vetor
void mostrarVet (int* vet, int numVet);

//Função para exibir o total de números no vetor
void mostrarNumVet (int numVet);

//Função para remover o último número do vetor
int* removeVet (int* vet, int numVet);

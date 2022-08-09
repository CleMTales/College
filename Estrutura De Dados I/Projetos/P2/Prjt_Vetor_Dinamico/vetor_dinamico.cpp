//Estrutura de Dados - prof. Irineu
//Aluno: Tales Clemente Matsuda
//vetor_dinamico.cpp
#include "vetor_dinamico.h"
#include <stdlib.h>
#include <math.h>

/* inserção no início */
int* insere_inicio (int* v, int x, int tam){
	if (tam == 1){
		 v = (int *) malloc(tam * sizeof(int));
		v[0] = x;
	}
	else {
		int temp[tam];
		for (int i = 1; i < tam; i++){
			temp[i] = v[i-1];
		}
		v = (int *) realloc(v, tam);
		cout << "Realocando vetor para tamanho: " << tam << "." << endl;
		for (int i = 1; i < tam; i++){
			v[i] = temp[i];
		}
		v[0] = x;
	}
	cout << "O elemento " << x << " foi inserido no início do vetor." << endl;
	
	return v;
}
/* inserção no fim */
int* insere_fim (int* v, int x, int tam){
	if (tam == 1){
		v = (int *) malloc(tam * sizeof(int));
		v[0] = x;
	}
	else {
		int temp[tam];
		for (int i = 0; i < tam-1; i++){
			temp[i] = v[i];
		}
		v = (int *) realloc(v, tam);
		cout << "Realocando vetor para tamanho: " << tam << "." << endl;
		for (int i = 0; i < tam-1; i++){
			v[i] = temp[i];
		}
		v[tam-1] = x;
	}
	cout << "O elemento " << x << " foi inserido no fim do vetor." << endl;
	return v;
}

//Busca de um número no vetor de forma sequencial
void busca_sequencial (int* v, int tam, int x){
	if (tam != 0){
		bool presente = false;
	 	for (int i = 0; i < tam; i++){
	 		if (v[i] == x){
	 			presente = true;
			}
		}
	if (presente)
		cout << "O número " << x << " está presente no vetor." << endl;
	else
		cout << "O número " << x << " não está presente no vetor." << endl;
	}
	else 
		cout << "O vetor está vazio." << endl;
}

//Busca binária de um número pelo vetor
void busca_binaria (int* v, int tam, int x){
	int* temp;
	int i = 0;
	temp = (int *) malloc(tam * sizeof(int));
	for (i = 0; i < tam; i++){
		temp[i] = v[i];
	}
	temp = ordena_BubbleSort(temp,tam);
	if (tam != 0){
		bool presente = false;
		int inf = 0, sup = tam-1, meio;
		
	 	do{
          meio = (inf + sup)/2;
          if (x == temp[meio]){
               presente = true;
               break;
           }
          if (x < temp[meio])
               sup = meio-1;
          else
               inf = meio+1;
    	 }while (inf <= sup);
	if (presente == true)
		cout << "O número " << x << " está presente no vetor." << endl;
	else
		cout << "O número " << x << " não está presente no vetor." << endl;
	}
	else 
		cout << "O vetor está vazio." << endl;
		
	free(temp);
}
//Ordenação do vetor pelo método Bubble Sort
int* ordena_BubbleSort (int* v, int tam){
	int temp[tam], i, j = 0, aux;
	bool troca = false;
	for (i = 0; i < tam; i++){
		temp[i] = v[i];
	}
	
	do{
		troca = false;
		for (i= 0; i < tam-1; i++){
			if (temp[i] > temp [i+1]){
				aux = temp[i];
				temp[i] = temp[i+1];
				temp[i+1] = aux;
				troca = true;
			}
		}
		
	} while (troca == true);
	
	for (i = 0; i < tam; i++){
		v[i] = temp[i];
	}
	return v;
}

//Tales Clemente Matsuda
//pilha.cpp
#include "pilha.h"


Lista* push(Lista* p, int v){
	p =	insereFim(p, v);
	return p;
}

Lista* pop(Lista* p){
	if (vazia(p)){
		cout << "Erro." << endl;
		return NULL;
	}	
	
	Lista* k = p;
	Lista* ant;
	
	if (tamanho(p) == 1){
		p = removeInicio(p);
		cout << "Pop - " << k->info << endl;
		return p;
	}
	
	while (k->prox != NULL ) {
		ant = k;
	 	k = k->prox;
	}
	cout << "Pop - " << k->info << endl;
	ant->prox = NULL;
	
	return p;
}

Lista* top(Lista* p){
	return mostraFim(p);

}

bool isEmpty(Lista* p){
	return vazia (p);
}

int size(Lista* p){
	return tamanho(p);
}

void mostrar(Lista* p){
	imprime(p);
}

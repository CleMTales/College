//Tales Clemente Matsuda
//fila.cpp
#include "fila.h"


Lista* enqueue(Lista* f, int v){
	f =	insereFim(f, v);
	return f;
}

Lista* dequeue(Lista* f){
	if (vazia(f)){
		cout << "Erro" << endl;
		return NULL;
	}
	Lista* k;
	k = f->prox;

	
	cout << "Dequeue - " << f->info << endl;
	free(f);
	return k;
}

Lista* front(Lista* f){
	if (vazia(f)){
		cout << "Erro" << endl;
		return f;}
	return mostraInicio(f);

}

bool isEmpty(Lista* f){
	return vazia(f);
}

int size(Lista* f){
	return tamanho(f);
}

void mostrar(Lista* f){
	imprime(f);
}

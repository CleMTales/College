//Tales Clemente Matsuda
//Lista.cpp
#include "Lista.h"

/* função de inicialização: retorna uma lista vazia */
Lista* inicializa (){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insereInicio (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* l){
	if (!vazia(l)){
		cout << "Info: ";
		Lista* p; /* variável auxiliar para percorrer a lista */
	 	for (p = l; p != NULL; p = p->prox)
	 		cout << p->info << ", ";
	 	cout << endl;
	} else cout << "Lista vazia! \n";	
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
bool vazia (Lista* l){
	return (l == NULL);
}

/* função busca: busca um elemento na lista */
Lista* busca (Lista* l, int v){
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
 		if (p->info == v)
 			return p;
 			
 	return NULL; /* não achou o elemento */
}

void busca_informe (Lista* l, int v){
	if (!vazia(busca (l, v))){
		cout << "O valor " << v << " está na lista! \n";
	} else 
		cout << "O valor " << v << " não está na lista! \n";
}

/* função retira: retira elemento da lista */
Lista* retira (Lista* l, int v) {
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	
	/* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != v) {
		ant = p;
	 	p = p->prox;
	}
	/* verifica se achou elemento */
	if (p == NULL)
		return l; /* não achou: retorna lista original */
	
	//Senão...	
	/* retira elemento */
	if (ant == NULL) { /* retira elemento do inicio */
		l = p->prox;
	}
	else { /* retira elemento do meio da lista */
		ant->prox = p->prox;
	}
	free(p);
	cout << "O número " << v << " foi retirado da lista." << endl;
	return l;
}

void libera (Lista* l){
	Lista* p = l;
	while (p != NULL) {
 		Lista* t = p->prox; /* guarda referência para o próximo elemento*/
 		free(p); /* libera a memória apontada por p */
 		p = t; /* faz p apontar para o próximo */
 	}
}

//retornar o nó-dado no início da lista para exibição, sem retirá-lo;
Lista* mostraInicio(Lista* l){
	return l;
}

//retornar o nó-dado no fim da lista para exibição, sem retirá-lo;
Lista* mostraFim(Lista* l){
	Lista* p;
	int i=0;
	for (p=l; p!=NULL; p=p->prox){
			if (p->prox == NULL)
 				return p;
	}
}


//retorna um valor inteiro representando a quantidade de dados contidos na lista, para que seja informado ao usuário;
int tamanho(Lista* l){
	Lista* p;
	int i = 0;
	for (p=l; p!=NULL; p=p->prox)
 		i++;
 	return i;
}

//retorna o número de ocorrências de um dado valor inteiro informado pelo usuário na lista (lembrando que a lista poderá conter dados repetidos);
int ocorrencias(Lista* l, int v){
	Lista* p;
	int i = 0;
	for (p=l; p!=NULL; p=p->prox)
 		if (p->info == v)
 			i++;
 	return i; 
}

//insere um novo nó-dado no fim da lista;
Lista* insereFim(Lista* l, int v){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	Lista* k = l;
	novo->info = v;
	novo->prox = NULL;
	if (vazia(l))
		return novo;
	while (k->prox != NULL){
		k = k->prox;
	}
	k->prox = novo;
	return l;
}

//remove nó-dado no início da Lista.
Lista* removeInicio(Lista* l){
	if (vazia(l)){
		cout << "A lista já está vazia." << endl;
		return l;
	}
	Lista* p;
	p = l->prox;
	free(l);
	return p;
}

//remove nó-dado no fim da Lista.
Lista* removeFim(Lista* l){
	if (vazia(l)){
		cout << "Erro." << endl;
		return l;
	}	
	
	if (tamanho(l) == 1){
		l = removeInicio(l);
		return l;
	}
	
	Lista* p = l;
	Lista* ant = NULL;
	while (p->prox != NULL ) {
		ant = p;
	 	p = p->prox;
	}
	
	ant->prox = NULL;
	free(p);
	cout << "Removendo último nó da lista." << endl;
	return l;
}

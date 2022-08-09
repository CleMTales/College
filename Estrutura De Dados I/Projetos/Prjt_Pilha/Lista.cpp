//Tales Clemente Matsuda
//Lista.cpp
#include "Lista.h"

/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa (){
	return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insereInicio (Lista* l, int i){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}

/* fun��o imprime: imprime valores dos elementos */
void imprime (Lista* l){
	if (!vazia(l)){
		cout << "Info: ";
		Lista* p; /* vari�vel auxiliar para percorrer a lista */
	 	for (p = l; p != NULL; p = p->prox)
	 		cout << p->info << ", ";
	 	cout << endl;
	} else cout << "Lista vazia! \n";	
}

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
bool vazia (Lista* l){
	return (l == NULL);
}

/* fun��o busca: busca um elemento na lista */
Lista* busca (Lista* l, int v){
	Lista* p;
	for (p=l; p!=NULL; p=p->prox)
 		if (p->info == v)
 			return p;
 			
 	return NULL; /* n�o achou o elemento */
}

void busca_informe (Lista* l, int v){
	if (!vazia(busca (l, v))){
		cout << "O valor " << v << " est� na lista! \n";
	} else 
		cout << "O valor " << v << " n�o est� na lista! \n";
}

/* fun��o retira: retira elemento da lista */
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
		return l; /* n�o achou: retorna lista original */
	
	//Sen�o...	
	/* retira elemento */
	if (ant == NULL) { /* retira elemento do inicio */
		l = p->prox;
	}
	else { /* retira elemento do meio da lista */
		ant->prox = p->prox;
	}
	free(p);
	cout << "O n�mero " << v << " foi retirado da lista." << endl;
	return l;
}

void libera (Lista* l){
	Lista* p = l;
	while (p != NULL) {
 		Lista* t = p->prox; /* guarda refer�ncia para o pr�ximo elemento*/
 		free(p); /* libera a mem�ria apontada por p */
 		p = t; /* faz p apontar para o pr�ximo */
 	}
}

//retornar o n�-dado no in�cio da lista para exibi��o, sem retir�-lo;
Lista* mostraInicio(Lista* l){
	return l;
}

//retornar o n�-dado no fim da lista para exibi��o, sem retir�-lo;
Lista* mostraFim(Lista* l){
	Lista* p;
	int i=0;
	for (p=l; p!=NULL; p=p->prox){
			if (p->prox == NULL)
 				return p;
	}
}


//retorna um valor inteiro representando a quantidade de dados contidos na lista, para que seja informado ao usu�rio;
int tamanho(Lista* l){
	Lista* p;
	int i = 0;
	for (p=l; p!=NULL; p=p->prox)
 		i++;
 	return i;
}

//retorna o n�mero de ocorr�ncias de um dado valor inteiro informado pelo usu�rio na lista (lembrando que a lista poder� conter dados repetidos);
int ocorrencias(Lista* l, int v){
	Lista* p;
	int i = 0;
	for (p=l; p!=NULL; p=p->prox)
 		if (p->info == v)
 			i++;
 	return i; 
}

//insere um novo n�-dado no fim da lista;
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

//remove n�-dado no in�cio da Lista.
Lista* removeInicio(Lista* l){
	if (vazia(l)){
		cout << "A lista j� est� vazia." << endl;
		return l;
	}
	Lista* p;
	p = l->prox;
	free(l);
	return p;
}

//remove n�-dado no fim da Lista.
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
	cout << "Removendo �ltimo n� da lista." << endl;
	return l;
}

//Estrutura de Dados - prof. Irineu
//Aluno: Tales Clemente Matsuda
//lista_dupla.cpp
#include "lista_dupla.h"
#include <stdlib.h>

/*inicializa a lista*/
Lista2* inicializa(){
	return NULL;
}

/* inser��o no in�cio */
Lista2* insere_inicio (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	/* verifica se lista n�o est� vazia */
	if (l != NULL)
		l->ant = novo;
 
 	return novo;
}

void imprimir_frente_fim (Lista2* l){
	if (!vazia(l)){
		cout << "Info: ";
		for(Lista2* p=l; p!=NULL; p=p->prox){
			cout << p->info << " - ";
		}
		cout << endl;
	} else cout << "Lista eh vazia!" << endl;
	
}

bool vazia(Lista2* l){
	return l==NULL;
}

/* fun��o busca: busca um elemento na lista */
Lista2* busca (Lista2* l, int v){
	if (!vazia(l)){
	 	for (Lista2* p=l; p!=NULL; p=p->prox)
	 		if (p->info == v)
	 			return p;
	}
 	return NULL; /* n�o achou o elemento ou a lista � vazia */
}

/* fun��o retira: retira elemento v da lista */
Lista2* retira (Lista2* l, int v) {
 	Lista2* p = busca(l,v);
 	//1- Testa se achou?
	if (p == NULL){
		cout << "O elemento n�o se encontra na lista." << endl;
 		return l; /* n�o achou o elemento: retorna lista inalterada */
 	}
 	
	//2- Testa casos de encontrar!
	 /* retira elemento do encadeamento */
 	if (l == p) //� o 1o n�-dado
 		l = p->prox;
 	else //� n�-dado intermedi�rio a �ltimo
 		p->ant->prox = p->prox;
 	//H� n�-dado seguinte a p? Se sim, atualize o ant dele!	
 	if (p->prox != NULL)
 		p->prox->ant = p->ant;
 	
	free(p);
 	cout << "O elemento " << v << " foi retirado da lista." << endl;
 	return l;
}

// Insere um elemento de forma ordenada
Lista2* insere_ordem (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	
	if (!vazia(l)){
		Lista2* p = l; /* vari�vel auxiliar aponta para n� inicial */
	 	while (v > p->info && p->prox!=NULL){
			p = p->prox;
			cout << "Atravessando ao final "<< v << " > " << p->info << endl;
		} 
		
		if (p->info < v && p->prox == NULL){
				novo->prox = NULL;
				p->prox = novo;
	 			novo->ant = p;
	 			
	 			return l;
			 }
		
		else if (p == l){
			
			novo->prox = l;
			l->ant = novo;
			novo->ant = NULL;
			
			return novo;
		}
		else {
			novo->ant = p->ant;
			p->ant->prox = novo;
			novo->prox = p;
			p->ant = novo;
		}
	}
	
	else {
		novo->prox = NULL;
		novo->ant = NULL;
		return novo;
	}
 	return l;
}

Lista2* remove_fim (Lista2* l, int v){
	Lista2* p = l;
	
	do{//Atravessa a lista at� chegar ao �ltimo elemento
		p = p->prox;
	} while (p->prox != NULL); 
	
	if (p == l){//Caso haja apenas um elemento na lista
		free (p);
		return NULL;
	}
	
	//Caso haja mais de um elemento
	else {//Retira o �ltimo e refaz as liga��es apropriadas
	 	p->ant->prox = NULL;
	 	free(p);
	 	return l;
	 }
}

Lista2* remove_inicio (Lista2* l, int v){
	Lista2* p = l;
	
	 if (p->prox == NULL){//Caso haja apenas um elemento na lista
	 	free (p);
	 	return NULL;
	 }
	 //Caso haja mais de um elemento
	 else {//Retira o primeiro e refaz as liga��es apropriadas
	 	p = p->prox;
	 	free(p->ant);
	 	p->ant = NULL;
	 	return p;
	 }
}

void imprimir_fim_frente (Lista2* l){
	Lista2* p = l;
	
	if (!vazia(l)){
		do{//Atravessa a lista at� chegar ao �ltimo elemento
			p = p->prox;
		} while (p->prox != NULL); 
	
		cout << "Info: ";
		for(p = p; p!=NULL; p=p->ant){
			cout << p->info << " - ";
		}
		cout << endl;
	} 
	else 
		cout << "Lista eh vazia!" << endl;
}

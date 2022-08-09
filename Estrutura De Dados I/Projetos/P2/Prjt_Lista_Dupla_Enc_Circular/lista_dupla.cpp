//Estrutura de Dados - prof. Irineu
//Aluno: Tales Clemente Matsuda
//lista_dupla.cpp
#include "lista_dupla.h"
#include <stdlib.h>

/*inicializa a lista*/
Lista2* inicializa(){
	return NULL;
}

/* inserção no início */
Lista2* insere_inicio (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;

	/* verifica se lista não está vazia */
	if (l != NULL){
		novo->prox = l;
		novo->ant = l->ant;
		l->ant->prox = novo;
		l->ant = novo;
		cout <<"teste" << endl << endl;
 	}
 	else if (l == NULL){
 		novo->ant = novo;
 		novo->prox = novo;
 		
	 }
 	return novo;
}

void imprimir_frente_fim (Lista2* l){
	if (!vazia(l)){
		Lista2* p = l;
		cout << "Info: ";
		do{
			cout << p->info << " - ";
			p = p->prox;
		} while (p != l);
		
		cout << endl;
	} else 
		cout << "Lista está vazia!" << endl;
	
}

bool vazia(Lista2* l){
	return l==NULL;
}

/* função busca: busca um elemento na lista */
Lista2* busca (Lista2* l, int v){
	if (!vazia(l)){
	 	for (Lista2* p=l; p!=NULL; p=p->prox)
	 		if (p->info == v)
	 			return p;
	}
 	return NULL; /* não achou o elemento ou a lista é vazia */
}

/* função retira: retira elemento v da lista */
Lista2* retira (Lista2* l, int v) {
 	Lista2* p = busca(l,v);
 	//1- Testa se achou?
	if (p == NULL){
		cout << "O elemento não se encontra na lista." << endl;
 		return l; /* não achou o elemento: retorna lista inalterada */
 	}
 	
	//2- Testa casos de encontrar!
	 /* retira elemento do encadeamento */
 	if (l == p) //É o 1o nó-dado
 		l = p->prox;
 	else //É nó-dado intermediário a último
 		p->ant->prox = p->prox;
 	//Há nó-dado seguinte a p? Se sim, atualize o ant dele!	
 	if (p->prox != NULL)
 		p->prox->ant = p->ant;
 	
	free(p);
 	cout << "O elemento " << v << " foi retirado da lista." << endl;
 	return l;
}

// Insere um elemento no fim da lista
Lista2* insere_fim (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	
	if (!vazia(l)){
		Lista2* p = l->ant; /* variável auxiliar aponta para nó final */
	 	
	 	novo->prox = l;
	 	novo->ant = p;
		p->prox = novo;
		l->ant = novo;
		
	}
	
	else {
		l = insere_inicio (l,v);
	}
 	return l;
}

Lista2* remove_fim (Lista2* l, int v){
	if (!vazia(l)){
		Lista2* p = l->ant;
	
	 	if (p == l){//Caso haja apenas um elemento na lista
		 	free (p);
		 	return NULL;
		}
		//Caso haja mais de um elemento
		else {//Retira o último e refaz as ligações intermediárias
			p->ant->prox = p->prox;
			p->prox->ant = p->ant;
			free(p);
			return l;
		}
	}
}


Lista2* remove_inicio (Lista2* l, int v){
	
	if (!vazia(l)){
		Lista2* p = l;
	
	 	if (p->ant == l){//Caso haja apenas um elemento na lista
		 	free (p);
		 	return NULL;
		}
		//Caso haja mais de um elemento
		else {//Retira o primeiro e refaz as ligações intermediárias
			
			p->ant->prox = p->prox;
			p->prox->ant = p->ant;
			p = p->prox;
			free(l);
			return p;
		}
	}
}
void imprimir_fim_frente (Lista2* l){
if (!vazia(l)){
	Lista2* p = l->ant;
		cout << "Info: ";
		do{
			cout << p->info << " - ";
			p = p->ant;
		} while (p != l->ant);
		
		cout << endl;
	} else 
		cout << "Lista está vazia!" << endl;
	
}

//Aula ED - prof. Irineu
//lista_simples_circular.cpp
//Aluno: Tales Clemente Matsuda
#include "lista_simples_circular.h"
#include <iostream>

/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa(){ //ok
	return NULL;
}

bool vazia(Lista* l){ //verifica se lista est� vazia: true caso positivo!
	return l == NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i){
	//l � ponteiro para �ltimo n�-dado, l->prox estar� apontando para 1o n�-dado
	//criando novo n�-dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	//testar se � o primeiro encadeamento
	if (vazia(l)){
		novo->prox = novo;
		return novo;
	}else{
		novo->prox = l->prox; //faz novo ser o 1o, e o antigo 1� ser segundo...
		l->prox = novo; //atualiza o encadeamento do n�-final com o novo 1o n�-dado
	}
	return l;	
}

/* inser��o no fim: retorna a lista atualizada */
Lista* insere_fim(Lista* l, int i){
	
	if (vazia(l)) //se for 1a inser��o... delega para insere_inicio
		return insere_inicio(l, i);
	
	//sen�o... faz-se o �ltimo virar pen�ltimo...
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
	novo->prox = l->prox;
	l->prox = novo;
	return novo;
}

/* fun��o imprime: imprime valores dos elementos */
void imprime(Lista* l){
	if (!vazia(l)){
		Lista* p = l->prox; /* vari�vel auxiliar aponta para n� inicial */
	 	printf("Info: ");
		do{ //garantir a travessia da lista mesmo no caso de �nico n�, partindo do inicial e usando-o tb para teste final
			printf("%d - ", p->info);	
			p = p->prox;
		}while(p !=l->prox); 
		printf("\n"); 
	}else printf("Lista eh vazia!\n");
}

/* fun��o retira: retira elemento da lista */
Lista* retira (Lista* l, int v) {
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
		
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l->prox; /* ponteiro para percorrer a lista*/
 	/* procura elemento na lista, guardando anterior */
	do{ //garantir a travessia da lista mesmo no caso de �nico n�, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
			break;
		ant = p;
		p = p->prox;	
	}while(p != l->prox); 
	
 	/* verifica se achou elemento */
 	if (ant != NULL && p == l->prox){//ok
 		cout << "O elemento n�o est� na lista." << endl;
		return l; /* n�o achou: retorna lista original */
	}
 	//verifica se h� apenas 1 n�-dado
 	if (p == p->prox){ 
 		free(p);
 		return NULL;
	}
	//achou n�-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox){//ok //primeiro n�-dado em p
		l->prox = p->prox; //�ltimo aponta para segundo
		free(p);
		return l;
	}
	//sen�o, � n� intermedi�rio para final
	ant->prox = p->prox;
	if (p == l){//se p aponta para o �ltimo n�-dado
		l = ant;
	} 
	free(p);
	return l;
}

//Busca um elemento na lista e diz se ele est� presente ou n�o
void busca_dado (Lista* l, int v){
	if(vazia(l)){
		cout << "A lista est� vazia." << endl;
	}
	
	else {
		bool presente = false;
		Lista* p = l->prox;
		do{ 
			if (p->info == v){
				presente = true;
				break;
			}
			p = p->prox;	
		} while(p != l->prox); 
		
		if (presente == true)
			cout << "O elemento est� na lista." << endl;
		else 
			cout << "O elemento n�o est� na lista." << endl;
	}
	
	
}

//Retorna um n�mero inteiro relativo ao tamanho da lista
int tamanho (Lista* l){
	if(vazia(l)){
		return 0;
	}
	Lista* p = l->prox;
	int t = 0;
	
	do{
		t++;
		p = p->prox;	
	} while(p != l->prox); 
	
	return t;	
}

//Remove o n� no in�cio da lista
Lista* remove_inicio (Lista* l){
	if (!vazia(l)){
		Lista* p = l->prox;
		//Lista de apenas um elemento
		if (p == p->prox){ 
	 		free(p);
	 		return NULL;
		}

		else {
			l->prox = p->prox; 
			free(p);
			return l;
		}
		cout << "O n�-dado inicial foi retirado." << endl;
	}
	else 
		cout << "A lista est� vazia." << endl;
}

//Remove o n� no fim da lista
Lista* remove_fim (Lista* l){
	if (!vazia(l)){
		Lista* p = l->prox;
		Lista* ant = NULL;
		//Lista de apenas um elemento
		if (p == p->prox){ 
	 		free(p);
	 		return NULL;
		}
		else {
			do{ 
				ant = p;
				p = p->prox;	
				
			} while(p->prox != l->prox); 
			
			ant->prox = p->prox;
			l = ant;
			free(p);
			return l;
		}
	}
	else 
		cout << "A lista est� vazia." << endl;
}

void imprime_inicio(Lista* l){
	Lista* p = l->prox;
	cout << "O primeiro elemento da lista �: " << p->info << "." << endl;
}

void imprime_fim(Lista* l){
	cout << "O �ltimo elemento da lista �: " << l->info << "." << endl;
}

Lista* libera(Lista* l){
	if (!vazia(l)){	
		Lista* p = l->prox;
		Lista* temp = NULL;		
		if (p == p->prox){ 
		 	free(p);
		 	return NULL;
		}
		else {
			do{
				temp = p->prox;
				free(p);
				p = temp;
			} while (p != l);
			free (l);
		}
		cout << "Lista liberada e reiniciada." << endl;
	}
	else
		cout << "A lista est� vazia." << endl;
	return inicializa();
}

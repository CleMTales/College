//Aula ED - prof. Irineu
//lista_simples_circular.cpp
//Aluno: Tales Clemente Matsuda
#include "lista_simples_circular.h"
#include <iostream>

/* função de inicialização: retorna uma lista vazia */
Lista* inicializa(){ //ok
	return NULL;
}

bool vazia(Lista* l){ //verifica se lista está vazia: true caso positivo!
	return l == NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio(Lista* l, int i){
	//l é ponteiro para último nó-dado, l->prox estará apontando para 1o nó-dado
	//criando novo nó-dado
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	//testar se é o primeiro encadeamento
	if (vazia(l)){
		novo->prox = novo;
		return novo;
	}else{
		novo->prox = l->prox; //faz novo ser o 1o, e o antigo 1º ser segundo...
		l->prox = novo; //atualiza o encadeamento do nó-final com o novo 1o nó-dado
	}
	return l;	
}

/* inserção no fim: retorna a lista atualizada */
Lista* insere_fim(Lista* l, int i){
	
	if (vazia(l)) //se for 1a inserção... delega para insere_inicio
		return insere_inicio(l, i);
	
	//senão... faz-se o último virar penúltimo...
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
	novo->prox = l->prox;
	l->prox = novo;
	return novo;
}

/* função imprime: imprime valores dos elementos */
void imprime(Lista* l){
	if (!vazia(l)){
		Lista* p = l->prox; /* variável auxiliar aponta para nó inicial */
	 	printf("Info: ");
		do{ //garantir a travessia da lista mesmo no caso de único nó, partindo do inicial e usando-o tb para teste final
			printf("%d - ", p->info);	
			p = p->prox;
		}while(p !=l->prox); 
		printf("\n"); 
	}else printf("Lista eh vazia!\n");
}

/* função retira: retira elemento da lista */
Lista* retira (Lista* l, int v) {
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
		
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l->prox; /* ponteiro para percorrer a lista*/
 	/* procura elemento na lista, guardando anterior */
	do{ //garantir a travessia da lista mesmo no caso de único nó, partindo do inicial e usando-o tb para teste final
		if (p->info == v)
			break;
		ant = p;
		p = p->prox;	
	}while(p != l->prox); 
	
 	/* verifica se achou elemento */
 	if (ant != NULL && p == l->prox){//ok
 		cout << "O elemento não está na lista." << endl;
		return l; /* não achou: retorna lista original */
	}
 	//verifica se há apenas 1 nó-dado
 	if (p == p->prox){ 
 		free(p);
 		return NULL;
	}
	//achou nó-dado numa lista com 2 ou mais elementos 
	if (ant == NULL && p == l->prox){//ok //primeiro nó-dado em p
		l->prox = p->prox; //último aponta para segundo
		free(p);
		return l;
	}
	//senão, é nó intermediário para final
	ant->prox = p->prox;
	if (p == l){//se p aponta para o último nó-dado
		l = ant;
	} 
	free(p);
	return l;
}

//Busca um elemento na lista e diz se ele está presente ou não
void busca_dado (Lista* l, int v){
	if(vazia(l)){
		cout << "A lista está vazia." << endl;
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
			cout << "O elemento está na lista." << endl;
		else 
			cout << "O elemento não está na lista." << endl;
	}
	
	
}

//Retorna um número inteiro relativo ao tamanho da lista
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

//Remove o nó no início da lista
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
		cout << "O nó-dado inicial foi retirado." << endl;
	}
	else 
		cout << "A lista está vazia." << endl;
}

//Remove o nó no fim da lista
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
		cout << "A lista está vazia." << endl;
}

void imprime_inicio(Lista* l){
	Lista* p = l->prox;
	cout << "O primeiro elemento da lista é: " << p->info << "." << endl;
}

void imprime_fim(Lista* l){
	cout << "O último elemento da lista é: " << l->info << "." << endl;
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
		cout << "A lista está vazia." << endl;
	return inicializa();
}

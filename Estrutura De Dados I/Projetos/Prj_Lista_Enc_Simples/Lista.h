//Tales Clemente Matsuda
//Lista.h
#include <iostream>
#include <stdlib.h>

using namespace std;

struct lista {
	int info;
 	struct lista* prox;
};
typedef struct lista Lista;

Lista* inicializa ();

Lista* insereInicio (Lista* l, int i);

void imprime (Lista* l);

bool vazia (Lista* l);

Lista* busca (Lista* l, int v);

void busca_informe (Lista* l, int v);

Lista* retira (Lista* l, int v);

void libera (Lista* l);

int mostraInicio(Lista* l);

int mostraFim(Lista* l);

int tamanho(Lista* l);

int ocorrencias(Lista* l, int v);

Lista* insereFim(Lista* l, int v);

Lista* removeInicio(Lista* l);

Lista* removeFim(Lista* l);

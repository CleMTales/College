//Tales Clemente Matsuda
#include <iostream>
#include "pilha.h"


int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	Lista* pilha = inicializa();
	

	pilha = push(pilha, 5);
	pilha = push(pilha, 3);
	pilha = pop(pilha);
	pilha = push(pilha, 7);	
	pilha = pop(pilha); 
	cout << "Top - " << top(pilha)->info << endl; 
	pilha = pop(pilha); 

	
	pilha = pop(pilha); 
	cout << boolalpha;
	cout <<	"Is Empty - " << isEmpty(pilha) << endl;
	pilha = push(pilha, 9);
	pilha = push(pilha, 7);
	pilha = push(pilha, 3);
	pilha = push(pilha, 5);
	mostrar(pilha);	
	cout << "Tamanho - " << size(pilha) << endl;
	pilha = pop(pilha);
	pilha = push(pilha, 8);
	pilha = pop(pilha);
	pilha = pop(pilha);
	
	system("pause");
	return 0;
}

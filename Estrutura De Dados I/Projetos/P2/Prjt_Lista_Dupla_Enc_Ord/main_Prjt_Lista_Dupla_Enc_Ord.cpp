//Estrutura de Dados - prof. Irineu
//Aluno: Tales Clemente Matsuda
#include <iostream>
#include "lista_dupla.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int op = 0;
	int val;
	Lista2* l = inicializa(); //ponteiro controla a lista encadeada dupla, apontando para o 1o n�-dado
	
	
	//Menu para acesso as fun��es
	do {
		cout << "Menu de op��es para manipula��o da lista duplamente encadeada ordenada:" << endl;
		cout << "1)Inserir n� na lista de forma ordenada" << endl;
		cout << "2)Remove n� no in�cio" << endl;
		cout << "3)Remove n� no fim" << endl;
		cout << "4)Retira um elemento da lista" << endl;
		cout << "5)Imprime a lista do in�cio ao fim"  << endl;
		cout << "6)Imprime a lista do fim ao in�cio" << endl;
		cout << "7)Busca um elemento na lista" << endl;
		
		
		cout << "Qualquer outro n�mero para finalizar" << endl;
	
	cin >> op;
	cout << endl;
	switch (op){
		case 1:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			l = insere_ordem(l, val);
		break;
		
		case 2:
			l = remove_inicio(l, val);
			cout << "Elemento inicial removido." << endl;
		break;
			
		case 3:
			l = remove_fim(l, val);
			cout << "Elemento final removido." << endl;
		break;
		
		case 4:
			cout << "Indique o valor para retirar: ";
			cin >> val;
			l = retira(l, val);
		break;
		
		case 5:
			imprimir_frente_fim(l);
		break;
			
		case 6:
			imprimir_fim_frente(l);
		break;
		
		case 7:
			cout << "Indique o valor para buscar na lista: ";
			cin >> val;
			if (busca(l, val) == NULL)
				cout << "O valor n�o est� na lista." << endl;
			else
				cout << "O valor est� na lista." << endl;
				
		break;			
		default:
			cout << "Encerrando programa." << endl;
		
	}
	} while (op >= 1 && op <= 7);
	
	
	
	system("pause");  
	return 0;
}

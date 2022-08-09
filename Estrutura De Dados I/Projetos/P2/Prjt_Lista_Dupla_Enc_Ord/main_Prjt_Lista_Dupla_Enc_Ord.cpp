//Estrutura de Dados - prof. Irineu
//Aluno: Tales Clemente Matsuda
#include <iostream>
#include "lista_dupla.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int op = 0;
	int val;
	Lista2* l = inicializa(); //ponteiro controla a lista encadeada dupla, apontando para o 1o nó-dado
	
	
	//Menu para acesso as funções
	do {
		cout << "Menu de opções para manipulação da lista duplamente encadeada ordenada:" << endl;
		cout << "1)Inserir nó na lista de forma ordenada" << endl;
		cout << "2)Remove nó no início" << endl;
		cout << "3)Remove nó no fim" << endl;
		cout << "4)Retira um elemento da lista" << endl;
		cout << "5)Imprime a lista do início ao fim"  << endl;
		cout << "6)Imprime a lista do fim ao início" << endl;
		cout << "7)Busca um elemento na lista" << endl;
		
		
		cout << "Qualquer outro número para finalizar" << endl;
	
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
				cout << "O valor não está na lista." << endl;
			else
				cout << "O valor está na lista." << endl;
				
		break;			
		default:
			cout << "Encerrando programa." << endl;
		
	}
	} while (op >= 1 && op <= 7);
	
	
	
	system("pause");  
	return 0;
}

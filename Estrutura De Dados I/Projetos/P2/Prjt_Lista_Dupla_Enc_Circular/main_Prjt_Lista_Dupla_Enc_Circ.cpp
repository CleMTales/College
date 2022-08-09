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
		cout << "1)Inserir nó início da lista" << endl;
		cout << "2)Inserir nó no fim" << endl;
		cout << "3)Remove nó no início" << endl;
		cout << "4)Remove nó no fim" << endl;
		cout << "5)Retira um elemento da lista"  << endl;
		cout << "6)Imprime a lista do início ao fim" << endl;
		cout << "7)Imprime a lista do fim ao início" << endl;
		
		
		cout << "Qualquer outro número para finalizar" << endl;
	
	cin >> op;
	cout << endl;
	switch (op){
		case 1:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			l = insere_inicio(l, val);
		break;
		
		case 2:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			l = insere_fim(l, val);
		break;
			
		case 3:
			l = remove_inicio(l, val);
			cout << "Elemento inicial removido." << endl;
		break;
		
		case 4:
			l = remove_fim(l, val);
			cout << "Elemento final removido." << endl;
		break;
		
		case 5:
			cout << "Indique o valor para retirar: ";
			cin >> val;
			l = retira(l, val);
		break;
			
		case 6:
			imprimir_frente_fim(l);
		break;
		
		case 7:
			imprimir_fim_frente(l);
				
		break;			
		default:
			cout << "Encerrando programa." << endl;
		
	}
	} while (op >= 1 && op <= 7);
	
	
	
	system("pause");  
	return 0;
}

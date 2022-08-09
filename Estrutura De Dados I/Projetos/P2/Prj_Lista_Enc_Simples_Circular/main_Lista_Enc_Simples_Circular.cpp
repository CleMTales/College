//Aula ED - prof. Irineu
//Aluno: Tales Clemente Matsuda
#include "lista_simples_circular.h"
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int op = 0;
	int val;
	Lista* l = inicializa();
	
	//Menu para acesso as funções
	do {
	cout << "Menu de opções para manipulação da lista encadeada simples circular:" << endl;
	cout << "1)Inserir nó no início" << endl;
	cout << "2)Inserir nó no fim" << endl;
	cout << "3)Imprime a lista" << endl;
	cout << "4)Retira um número da lista" << endl;
	cout << "5)Mostra se a lista está vazia"  << endl;
	cout << "6)Busca um número na lista" << endl;
	cout << "7)Mostra o tamanho da lista" << endl;
	cout << "8)Remove nó no início" << endl;
	cout << "9)Remove nó no fim" << endl;
	cout << "10)Mostra o número no início da lista" << endl;
	cout << "11)Mostra o número no fim da lista" << endl;
	cout << "12)Libera a lista e inicializa uma nova" << endl;
	
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
			imprime(l);
		break;
		
		case 4:
			cout << "Indique o valor para retirar: ";
			cin >> val;
			l = retira(l, val);
		break;
		
		case 5:
			if (vazia(l) == true)
				cout << "A lista está vazia." << endl;
			else 
				cout << "A lista não está vazia." << endl;
		break;
			
		case 6:
			cout << "Indique o valor para buscar: ";
			cin >> val;
			busca_dado (l, val);
		break;
		
		case 7:
			cout << "O tamanho da lista é: " << tamanho(l) << endl;
		break;
		
		case 8:
			l = remove_inicio(l);
		break;
		
		case 9:
			l = remove_fim(l);
		break;
		
		case 10:			
			imprime_inicio(l);
		break;
		
		case 11:
			imprime_fim(l);
		break;
		
		case 12:
			l = libera(l);
		break;
		default:
			cout << "Encerrando programa." << endl;
		
	}
	} while (op >= 1 && op <= 12);
	
	
	
	system("pause");  
	return 0;
}

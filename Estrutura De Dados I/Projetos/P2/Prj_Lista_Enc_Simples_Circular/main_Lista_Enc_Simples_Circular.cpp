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
	
	//Menu para acesso as fun��es
	do {
	cout << "Menu de op��es para manipula��o da lista encadeada simples circular:" << endl;
	cout << "1)Inserir n� no in�cio" << endl;
	cout << "2)Inserir n� no fim" << endl;
	cout << "3)Imprime a lista" << endl;
	cout << "4)Retira um n�mero da lista" << endl;
	cout << "5)Mostra se a lista est� vazia"  << endl;
	cout << "6)Busca um n�mero na lista" << endl;
	cout << "7)Mostra o tamanho da lista" << endl;
	cout << "8)Remove n� no in�cio" << endl;
	cout << "9)Remove n� no fim" << endl;
	cout << "10)Mostra o n�mero no in�cio da lista" << endl;
	cout << "11)Mostra o n�mero no fim da lista" << endl;
	cout << "12)Libera a lista e inicializa uma nova" << endl;
	
	cout << "Qualquer outro n�mero para finalizar" << endl;
	
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
				cout << "A lista est� vazia." << endl;
			else 
				cout << "A lista n�o est� vazia." << endl;
		break;
			
		case 6:
			cout << "Indique o valor para buscar: ";
			cin >> val;
			busca_dado (l, val);
		break;
		
		case 7:
			cout << "O tamanho da lista �: " << tamanho(l) << endl;
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

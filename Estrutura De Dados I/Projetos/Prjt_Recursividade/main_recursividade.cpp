//Tales Clemente Matsuda
#include "Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int op = 0;
	int val;
	Lista* l = inicializa();
	//Menu para acesso as fun��es
	do {
	cout << "Menu de op��es para manipula��o da lista encadeada:" << endl;
	cout << "1)Inserir n� no in�cio" << endl;
	cout << "2)Imprime a lista" << endl;
	cout << "3)Busca um n�mero na lista" << endl;
	cout << "4)Retira um n�mero da lista" << endl;
	cout << "5)Mostra o n�mero no in�cio da lista" << endl;
	cout << "6)Mostra o n�mero no fim da lista" << endl;
	cout << "7)Mostra o tamanho da lista" << endl;
	cout << "8)Mostra o n�mero de repeti��es de um n�mero na lista" << endl;
	cout << "9)Inserir n� no fim" << endl;
	cout << "10)Remove n� no in�cio" << endl;
	cout << "11)Remove n� no fim" << endl;
	cout << "12)Imprime a lista atrav�s de uma fun��o recursiva" << endl;
	cout << "13)Retira um elemento da lista atrav�s de uma fun��o recursiva" << endl;
	cout << "14)Libera a lista atrav�s de uma fun��o recursiva" << endl;
	cout << "15)Inicializa uma nova lista" << endl;
	cout << "Qualquer outro n�mero para finalizar" << endl;
	
	cin >> op;
	cout << endl;
	switch (op){
		case 1:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			l = insereInicio(l, val);
		break;
		
		case 2:
			imprime(l);
		break;
			
		case 3:
			cout << "Indique o valor para buscar: ";
			cin >> val;
			busca_informe (l, val);
		break;
		
		case 4:
			cout << "Indique o valor para retirar: ";
			cin >> val;
			l = retira(l, val);
		break;
		
		case 5:
			cout << "O primeiro elemento da lista �: " << mostraInicio(l) << endl;
		break;
			
		case 6:
			cout << "O �ltimo elemento da lista �: " << mostraFim(l) << endl;	
		break;
		
		case 7:
			cout << "O tamanho da lista �: " << tamanho(l) << endl;
		break;
		
		case 8:
			cout << "Indique o valor para checar: ";
			cin >> val;
			cout << "O n�mero de vezes que o n�mero " << val << " se repete �:  " << ocorrencias(l, val) << endl;
		break;
		
		case 9:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			l = insereFim(l, val);
		break;
		
		case 10:
			l = removeInicio(l);
		break;
		
		case 11:
			l = removeFim(l);
		break;
	
		case 12:
			imprime_recursiva(l);
		break;
		
		case 13:
			cout << "Indique o valor para retirar: ";
			cin >> val;
			l = retira_recursiva(l, val);
		break;
		
		case 14:
			libera_recursiva(l);
		break;
		
		case 15:
			l = inicializa();
		break;
		
		default:
			cout << "Encerrando programa." << endl;
	}
	} while (op >= 1 && op <= 15);
	
	
	libera(l);

	
	system("pause");
	return 0;
}

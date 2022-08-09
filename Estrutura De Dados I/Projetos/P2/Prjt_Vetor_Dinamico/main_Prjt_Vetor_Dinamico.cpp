//Estrutura de Dados - prof. Irineu
//Aluno: Tales Clemente Matsuda
#include <iostream>
#include "vetor_dinamico.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	int tam_vet = 0;
	int* vet;
	int op, val, i;
	
	//Menu para acesso as funções
	do {
		cout << "Menu de opções para manipulação do vetor:" << endl;
		cout << "1)Insere elemento no início" << endl;
		cout << "2)Insere elemento no fim" << endl;
		cout << "3)Busca sequencial de um elemento" << endl;
		cout << "4)Busca binária de um elemento" << endl;
		cout << "5)Ordenação BubbleSort"  << endl;
		cout << "6)Imprime o vetor" << endl;
		cout << "Qualquer outro número para finalizar" << endl;
	
	cin >> op;
	cout << endl;
	switch (op){
		case 1:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			tam_vet++;
			vet = insere_inicio(vet, val, tam_vet);
		break;
		
		case 2:
			cout << "Indique o valor para inserir: ";
			cin >> val;
			tam_vet++;
			vet = insere_fim(vet, val, tam_vet);
		break;
			
		case 3:
			cout << "Indique o valor para buscar no vetor: ";
			cin >> val;
			busca_sequencial(vet, tam_vet, val);
		break;
		
		case 4:
			cout << "Indique o valor para buscar no vetor: ";
			cin >> val;
			busca_binaria(vet, tam_vet, val);
		break;
		
		case 5:
			vet = ordena_BubbleSort (vet, tam_vet);
			cout << "O vetor foi ordenado." << endl;
		break;
			
		case 6:
			if (tam_vet > 0){
				cout << "Vetor: ";
				for(i = 0; i < tam_vet; i++){
				cout << vet[i] << " - ";
			}
				cout << endl;
			} else cout << "O vetor está vazio" << endl;
		break;
				
		default:
			cout << "Encerrando programa." << endl;
		
	}
	} while (op >= 1 && op <= 6);
	
	
	
	system("pause");  
	return 0;
}

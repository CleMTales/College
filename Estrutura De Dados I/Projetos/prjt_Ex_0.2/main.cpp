//Tales Clemente Matsuda
#include <iostream>
#include <conio.h>
#include "vetor.h"
#include <locale.h>

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	cout << "Digite os números para adicionar ao vetor: \n";
	int vet[10], op(1);
	lerNum(vet);

	do {
		cout << "Opções disponíveis:" << endl;
		cout << "1)Exibir o vetor" << endl;
		cout << "2)Exibir os números ímpares vetor" << endl;
		cout << "3)Exibir os números pares vetor" << endl;
		cout << "4)Encerrar o programa" << endl;
		cout << "O que deseja fazer: ";
		cin >> op;
		
		switch (op){
			case 1: //Exibir o vetor
			mostrarVet(vet);
			break;
			
			case 2: // Exibir os números ímpares
			mostrarImp(vet);
			break;
			
			case 3: //Exibir os números pares
			mostrarPar(vet);
			break;
			
			case 4: //Encerrar o programa
			break;
			
			default:
				cout << "Opção inválida. Tente novamente." << endl;
		}
		
	} while (op != 4);
	
	cout << "Encerrando programa." << endl;
	system("pause");
	return 0;
}

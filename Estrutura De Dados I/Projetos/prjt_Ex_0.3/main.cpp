//Tales Clemente Matsuda
#include <iostream>
#include <conio.h>
#include "vetorDin.h"
#include <locale.h>
#include <stdlib.h>

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	int *vet;
	int op(1), totNumVet(0);
	
	vet = (int *) calloc(1, sizeof(int));

	do {
		cout << "Opções disponíveis:" << endl;
		cout << "1)Cadastrar número" << endl;
		cout << "2)Exibir número(s) cadastrados" << endl;
		cout << "3)Exibir quantidade de números cadastrados" << endl;
		cout << "4)Remover último número cadastrado" << endl;
		cout << "5)Sair" << endl;
		cout << "O que deseja fazer: ";
		cin >> op;
		
			
		switch (op){
			case 1: //Cadastrar número
			totNumVet++;
			vet = addVet(vet,totNumVet);
			
			break;
			
			case 2: //Exibir os números cadastrados
			mostrarVet(vet, totNumVet);
			break;
			
			case 3: //Exibir a quantidade de números cadastrados
			mostrarNumVet(totNumVet);
			break;
			
			case 4: //Remover o último número cadastrado
			if (totNumVet > 0){
				totNumVet--;
			}
			vet = removeVet(vet, totNumVet);
			break;
			
			case 5:
			break;
			
			default:
				cout << "Opção inválida. Tente novamente." << endl;
		}
		
	} while (op != 5);
	
	cout << "Encerrando programa." << endl;
	system("pause");
	return 0;
}

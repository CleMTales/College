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
		cout << "Op��es dispon�veis:" << endl;
		cout << "1)Cadastrar n�mero" << endl;
		cout << "2)Exibir n�mero(s) cadastrados" << endl;
		cout << "3)Exibir quantidade de n�meros cadastrados" << endl;
		cout << "4)Remover �ltimo n�mero cadastrado" << endl;
		cout << "5)Sair" << endl;
		cout << "O que deseja fazer: ";
		cin >> op;
		
			
		switch (op){
			case 1: //Cadastrar n�mero
			totNumVet++;
			vet = addVet(vet,totNumVet);
			
			break;
			
			case 2: //Exibir os n�meros cadastrados
			mostrarVet(vet, totNumVet);
			break;
			
			case 3: //Exibir a quantidade de n�meros cadastrados
			mostrarNumVet(totNumVet);
			break;
			
			case 4: //Remover o �ltimo n�mero cadastrado
			if (totNumVet > 0){
				totNumVet--;
			}
			vet = removeVet(vet, totNumVet);
			break;
			
			case 5:
			break;
			
			default:
				cout << "Op��o inv�lida. Tente novamente." << endl;
		}
		
	} while (op != 5);
	
	cout << "Encerrando programa." << endl;
	system("pause");
	return 0;
}

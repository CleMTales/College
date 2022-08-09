//Tales Clemente Matsuda
//structUser.cpp
//Desenvolver as funções a serem executadas sobre o struct dinâmico
#include "structUser.h"
using namespace std;


Usuario* addUser(Usuario* userList, int totNumUser){

	cout << "Informe o nome do " << totNumUser << "º usuário: ";
	fgets(userList[totNumUser-1].nome, 50,stdin);
	cout << "Informe o RG do " << totNumUser << "º usuário: ";
	cin >> userList[totNumUser-1].rg;
	getchar();
	cout << "Informe o CPF do " << totNumUser << "º usuário: ";
	cin >> userList[totNumUser-1].cpf;
	getchar();
	cout << "Informe o endereço do " << totNumUser << "º usuário: ";
	fgets(userList[totNumUser-1].end, 100,stdin);
	
	
	return userList;
}

void mostrarLista (Usuario* userList, int totNumUser){
	int i, j, len;
	cout << "Os usuários cadastrados são:\n";
	if (totNumUser == 0)
		cout << "Não há usuários cadastrados." << endl;
	for (i = 0; i < totNumUser; i++){
		cout << i+1 << "º)Nome: ";
		
		len = strlen(userList[i].nome);
		for (j = 0; j < len-1; j++){
			cout << userList[i].nome[j];
		}
		
		cout << endl << "RG: " << userList[i].rg << endl;
		cout << "CPF: " << userList[i].cpf << endl;
		
		cout << "Endereço: ";
		
		len = strlen(userList[i].end);
		for (j = 0; j < len-1; j++){
			cout << userList[i].end[j];
		}
		
		cout << endl;
		
		if (i < totNumUser - 1)
			cout << endl;
	}	
	return;
}

void mostrarNumUser (int numTotUser){
	cout << "O sistema atualmente possui " << numTotUser << " usuário(s)." << endl;	
}

Usuario* removeUser(Usuario* userList, int totNumUser){
	if (totNumUser != 0)
		userList = (Usuario *) realloc(userList, (totNumUser * sizeof (Usuario)));
	return userList;
}

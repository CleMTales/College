//Tales Clemente Matsuda
//structUser.cpp
//Desenvolver as fun��es a serem executadas sobre o struct din�mico
#include "structUser.h"
using namespace std;


Usuario* addUser(Usuario* userList, int totNumUser){

	cout << "Informe o nome do " << totNumUser << "� usu�rio: ";
	fgets(userList[totNumUser-1].nome, 50,stdin);
	cout << "Informe o RG do " << totNumUser << "� usu�rio: ";
	cin >> userList[totNumUser-1].rg;
	getchar();
	cout << "Informe o CPF do " << totNumUser << "� usu�rio: ";
	cin >> userList[totNumUser-1].cpf;
	getchar();
	cout << "Informe o endere�o do " << totNumUser << "� usu�rio: ";
	fgets(userList[totNumUser-1].end, 100,stdin);
	
	
	return userList;
}

void mostrarLista (Usuario* userList, int totNumUser){
	int i, j, len;
	cout << "Os usu�rios cadastrados s�o:\n";
	if (totNumUser == 0)
		cout << "N�o h� usu�rios cadastrados." << endl;
	for (i = 0; i < totNumUser; i++){
		cout << i+1 << "�)Nome: ";
		
		len = strlen(userList[i].nome);
		for (j = 0; j < len-1; j++){
			cout << userList[i].nome[j];
		}
		
		cout << endl << "RG: " << userList[i].rg << endl;
		cout << "CPF: " << userList[i].cpf << endl;
		
		cout << "Endere�o: ";
		
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
	cout << "O sistema atualmente possui " << numTotUser << " usu�rio(s)." << endl;	
}

Usuario* removeUser(Usuario* userList, int totNumUser){
	if (totNumUser != 0)
		userList = (Usuario *) realloc(userList, (totNumUser * sizeof (Usuario)));
	return userList;
}

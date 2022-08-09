//Tales Clemente Matsuda

#include "structUser.h"

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	Usuario* userList;
	int op(1), totNumUser(0);
	
	userList = (Usuario*) calloc(1, sizeof(Usuario));

	do {
		cout << "Op��es dispon�veis:" << endl;
		cout << "1)Cadastrar usu�rio" << endl;
		cout << "2)Exibir usu�rio(s) cadastrados" << endl;
		cout << "3)Exibir quantidade de usu�rios cadastrados" << endl;
		cout << "4)Remover �ltimo usu�rio cadastrado" << endl;
		cout << "5)Sair" << endl;
		cout << "O que deseja fazer: ";
		cin >> op;
		getchar();
		
		switch (op){
			case 1: //Cadastrar usu�rio
			totNumUser++;
			if(totNumUser > 1)
				userList = (Usuario*) realloc(userList, (totNumUser * sizeof (Usuario))); 
			userList = addUser(userList, totNumUser);
			
			break;
			
			case 2: //Exibir os n�meros cadastrados
			mostrarLista(userList,totNumUser);
			break;
			
			case 3: //Exibir a quantidade de n�meros cadastrados
			mostrarNumUser(totNumUser);
			break;
			
			case 4: //Remover o �ltimo n�mero cadastrado
			if (totNumUser > 0){
				totNumUser--;
			}
			removeUser(userList,totNumUser);
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

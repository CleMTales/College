//Tales Clemente Matsuda

#include "biblioteca.h"

using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	Livro* livroList;
	int op(1), totNumLivro(0);
	
	livroList = (Livro*) calloc(1, sizeof(Livro));

	do {
		cout << "Opções disponíveis:" << endl;
		cout << "1)Cadastrar livro" << endl;
		cout << "2)Consultar livros cadastrados" << endl;
		cout << "3)Sair" << endl;
		cout << "O que deseja fazer: ";
		cin >> op;
		getchar();
		
		switch (op){
			case 1: //Cadastrar livro
			totNumLivro++;
			if(totNumLivro > 1)
				livroList = (Livro*) realloc(livroList, (totNumLivro * sizeof (Livro))); 
			livroList = addLivro(livroList, totNumLivro);
			
			break;
			
			case 2: //Exibir os livros cadastrados
			mostrarLista(livroList,totNumLivro);
			break;
			
			case 3: 
			break;
			
			default:
				cout << "Opção inválida. Tente novamente." << endl;
		}
		
	} while (op != 3);
	
	cout << "Encerrando programa." << endl;
	system("pause");
	return 0;
}

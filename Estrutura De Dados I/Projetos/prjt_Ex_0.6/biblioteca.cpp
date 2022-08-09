//Tales Clemente Matsuda
//structUser.cpp
//Desenvolver as funções a serem executadas sobre o struct dinâmico
#include "biblioteca.h"
using namespace std;


Livro* addLivro(Livro* livroList, int totNumLivro){
	
	cout << "Informe o nome do livro: ";
	fgets(livroList[totNumLivro-1].nome, 50,stdin);
	cout << "Informe o código do livro: ";
	cin >> livroList[totNumLivro-1].cod;
	getchar();
	cout << "Informe o autor do livro: ";
	fgets(livroList[totNumLivro-1].autor, 50,stdin);
	cout << "Informe o ano de publicação do livro: ";
	cin >> livroList[totNumLivro-1].ano;
	getchar();
	cout << "Cadastro efetuado com sucesso!" << endl;
	return livroList;
}

void mostrarLista (Livro* livroList, int totNumLivro){
	int i, j, len;
	cout << "Os livros cadastrados são:\n";
	cout << "Exibição da seguinte forma:\n";
	cout << "Nomes Livro | Codigo | Autor | Ano\n";
	if (totNumLivro == 0)
		cout << "Não há livros cadastrados." << endl;
	for (i = 0; i < totNumLivro; i++){
		cout << i+1 << "º)";
		
		len = strlen(livroList[i].nome);
		for (j = 0; j < len-1; j++){
			cout << livroList[i].nome[j];
		}
		
		cout << " | " << livroList[i].cod << " | ";
		
		len = strlen(livroList[i].autor);
		for (j = 0; j < len-1; j++){
			if (livroList[i].autor[j] != '\n')
				cout << livroList[i].autor[j];
		}
		
		cout << " | " << livroList[i].ano << endl;
		if (i == totNumLivro - 1)
			cout << endl;
			
		system("pause");
	}	
	return;
}


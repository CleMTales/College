//Tales Clemente Matsuda
#include <iostream>
#include <locale>
#include <conio.h>

using namespace std; 
int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	char charASCII = 0;
	
	cout << "Programa para exibir o número em ASCII de um caractere.\n";
	
	//Recepção e exibição do caractere
	do{
		cout << "Digite um caractere: ";
		charASCII = getch();
		int intASCII = charASCII;
		cout << "\nCaractere: " << charASCII << " | Dec. ASCII: " << intASCII << endl;
	} while (charASCII != 27);
	
	//Mensagem de finalização do programa
	cout << "Fim de programa, tecla ESC foi pressionada!\n";
	system("pause");
	return 0;
}

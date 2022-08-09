//Tales Clemente Matsuda
#include <iostream>
#include <locale>
#include <conio.h>
#include <stdlib.h>
#include "fraseDin.h"

using namespace std; 
int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	char *frase;
	int *fraseASCII;
	
	frase = (char *) calloc(1, sizeof(char));
	fraseASCII = (int *) calloc (1, sizeof(int));
	
	char temp;
	int totChar(0), i(0);
	
	cout << "Programa para exibir os números em ASCII de uma frase.\n";
	cout << "Digite a frase e pressione ESC para finalizar.\n";
	
	//Recepção dos caracteres e conversão do vetor em caractere para o vetor em ASCII
	do{
		temp = getch();
		if (temp == 8 && totChar > 0)
			totChar--;
		else 
			totChar++;
		frase = addChar(frase, totChar, temp);
		fraseASCII = charToASCII(frase, totChar, fraseASCII);
	} while (temp != 27);
	
	
	//Exibição dos vetores finais
	cout << "A frase digitada foi: \n";
	mostrarFrase(frase,totChar);
	cout << "\nO equivalente em ASCII é: \n";
	mostrarASCII(fraseASCII,totChar);
	
	
	//Mensagem de finalização do programa
	cout << "\nFim de programa, tecla ESC foi pressionada!\n";
	system("pause");
	return 0;
}

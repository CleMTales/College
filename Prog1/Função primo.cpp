/* Programa: Função de identificação de números primos. 
Autor: Anselmo Pestana R. Costa  
Data de criação: 22/06/2020  
Data de Modificação: 22/06/2020  
Modificação: Tales Clemente Matsuda
*/  

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

// Função para identificar se o número é primo ou não.
ehprimo(int numero)
{
	setlocale(LC_ALL,"portuguese");
	bool primo=true;
	int quantidadeDivisoes,i;
		
	quantidadeDivisoes = 0;
	for (int i=2; i < numero / 2 + 1 ; i++)
	{
	    quantidadeDivisoes++;
	    if (numero % i == 0)
		{
	        primo = false;
	        break;
	    }
	}
	
	if (primo==true)
	{
	    cout << "O numero " << numero << " é primo. \n";
	}
	else
	{
		cout << "O numero " << numero << " nao é primo. \n";
		cout << "O número " << numero << " é divisível por: " << quantidadeDivisoes+1 << ".\n";
	}
	cout << "Quantidade de divisoes: " << quantidadeDivisoes << ".\n\n";
}

// Programa que através de uma função identifica se um valor é primo ou não.
main()
{
	setlocale(LC_ALL,"portuguese");
	int numero;
	
	do{
		cout << "Informe um numero inteiro para saber se ele é primo ou 0 para sair: ";
		cin >> numero;
		if (numero != 0)
		ehprimo(numero);
	} while (numero != 0);
	system ("pause");
}

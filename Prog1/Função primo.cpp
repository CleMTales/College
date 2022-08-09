/* Programa: Fun��o de identifica��o de n�meros primos. 
Autor: Anselmo Pestana R. Costa  
Data de cria��o: 22/06/2020  
Data de Modifica��o: 22/06/2020  
Modifica��o: Tales Clemente Matsuda
*/  

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

// Fun��o para identificar se o n�mero � primo ou n�o.
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
	    cout << "O numero " << numero << " � primo. \n";
	}
	else
	{
		cout << "O numero " << numero << " nao � primo. \n";
		cout << "O n�mero " << numero << " � divis�vel por: " << quantidadeDivisoes+1 << ".\n";
	}
	cout << "Quantidade de divisoes: " << quantidadeDivisoes << ".\n\n";
}

// Programa que atrav�s de uma fun��o identifica se um valor � primo ou n�o.
main()
{
	setlocale(LC_ALL,"portuguese");
	int numero;
	
	do{
		cout << "Informe um numero inteiro para saber se ele � primo ou 0 para sair: ";
		cin >> numero;
		if (numero != 0)
		ehprimo(numero);
	} while (numero != 0);
	system ("pause");
}

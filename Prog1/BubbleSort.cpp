/* Autor: Tales Clemente Matsuda
Prog: Ordenar um vetor de n números.
Data de criação: 22/06/2020 
Última alteração: 27/06/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<time.h>
using namespace std;

main()
{
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
	int vet[10],i=0,j=0,mem;
	cout << "Aperte qualquer tecla para exibir o processo de organização de um vetor.\n";
	system ("pause");
	
	for (i=0;i<10;i++)
	{
		vet[i]= rand()%50;
		cout << vet[i] << "\t";	
	}
	cout << "\n";
	for (i=0;i<10;i++)
	{
		for (j=0;j<10;j++)
		{
			if (vet[j]>vet[j+1])
			{
				mem=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=mem;
			}
				cout << vet[j] << "\t";	
		}
		cout << "\n";
			
	}
	cout << "\n";
	
	for (i=0;i<10;i++)
	{
		cout << vet[i] << "\t";
	}
	cout << "\n";
	system ("Pause");
	
}
	

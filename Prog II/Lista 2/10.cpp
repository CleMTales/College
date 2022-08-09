/* 
Progama: Receber um nome e imprimir quantas letras 'A' há nele.
Autor: Tales Clemente Matsuda
Data de criação: 12/09/2020
Data de modificação:12/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int nome_Acont(char nome[20])
{
	int i=0,A = 0;
	for (i=0;i<20;i++)
	{
		if (nome[i] == 'A' or nome[i] == 'a')
			A++;
	}
	return A;
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[20];
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("O nome %s tem %i letras 'A'.\n",nome, nome_Acont(nome));
		
	system("pause");
}

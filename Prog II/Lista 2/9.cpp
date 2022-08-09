/* 
Progama: Receber um nome e imprimir quantas letras há nele.
Autor: Tales Clemente Matsuda
Data de criação: 12/09/2020
Data de modificação:12/09/2020*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int nome_Cont(char nome[20])
{
	int i=0,letras=0;
	for (i=0;i<20;i++)
	{
		if (nome[i] != 0)
			letras++;
		else 
		break;		
	}
	return letras;
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[20];
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("O nome %s tem %i letras.\n",nome, nome_Cont(nome));
		
	system("pause");
}

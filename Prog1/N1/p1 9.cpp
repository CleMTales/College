/*
Autor: Tales Clemente Matsuda
Prog: Calcular quantas letras tem um nome.
Data de criação: 19/05/2020
Última atualização: 19/05/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main()


{
	setlocale(LC_ALL,"portuguese");
	
	int tam=0,c=0;
	char nome[40];
	
	printf("Digite o nome: ");
	gets(nome);
	
	while (nome[c]!= '\0')
	{
		if(nome[c] != ' ')
		tam++;
		c++;
	}
	
	printf("O nome %s tem %i letras.\n\n",nome,tam);
	printf("Finalizando.\n");
	
	system("pause");
	return 0;
	
}

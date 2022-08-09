/* Autor: Tales Clemente Matsuda
Prog: Imprimir o nome na mesma quantia de vezes da quantidade de letras do nome inserido.
Data de criação:19/05/2020 
Última alteração:19/05/2020
OBS: Feito um loop para facilitar a checagem.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[30];
	int x,y,tam;
	
	printf("Digite seu nome: ");
	gets(nome);
	
	tam = strlen(nome);
	
	printf("\nO nome digitaado foi: \n");
	for(x=0;x<tam;x++)
	{
		for(y=0;y<x;y++)
			printf("\t");
		printf("%s\n", nome);
	}
	
	printf("Finalizando.\n");
	
	system("pause");
	return 0;
}
	
